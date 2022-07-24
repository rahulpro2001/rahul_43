class Solution {
public:
    void func(Node *copy,Node *node,vector<Node*> &vis)
    {
        vis[copy->val] = copy;
        for(auto it:node->neighbors)
        {
            if(!vis[it->val])
            {
                Node *nwnode = new Node(it->val);
                copy->neighbors.push_back(nwnode);
                func(nwnode,it,vis);
            }else{
                copy->neighbors.push_back(vis[it->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(node==nullptr)return nullptr;
        vector<Node*> vis(1000);
        Node *copy = new Node(node->val);
        func(copy,node,vis);
        return copy;
    }
};