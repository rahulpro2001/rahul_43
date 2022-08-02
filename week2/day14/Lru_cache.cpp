class LRUCache {
public:
    class node
    {
        public:
        int val;
        int key;
        node *next=nullptr;
        node *prev=nullptr;
        node(int key_,int val_)
        {
            key = key_;
            val = val_;
        }
    };
    
    node *head = new node(-1,-1);
    node *tail = new node(-1,-1);
    int cap;
    unordered_map<int,node*> m;
    
    void addnode(node *nwnode)
    {
        nwnode->next = head->next;
        nwnode->next->prev = nwnode;
        nwnode->prev = head;
        head->next = nwnode;
    }
    
    void deleten(node *nwnode)
    {
        node *temp = nwnode->prev;
        temp->next=temp->next->next;
        temp->next->next->prev=temp;
    }
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end())
        {
            node *temp = m[key];
            int t=temp->val;
            m.erase(key);
            deleten(temp);
            addnode(temp);
            return key;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            node *temp = m[key];
            deleten(temp);
            m.erase(key);
        }
        
        if(cap==m.size())
        {
            deleten(tail->prev);
            m.erase(key);
        }
        addnode(new node(key,value));
        m[key]=head->next;
    }
};