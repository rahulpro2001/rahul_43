class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)return nullptr;
        queue<Node*> q;
        Node * ans = root;
        q.push(root);
        while(q.size())
        {
           int n = q.size();
            for(int i = 0;i<n;i++)
            {
                Node *temp = q.front();q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                if(i==n-1)temp->next =  nullptr;
                else temp->next = q.front();
            }
        }
        return root;
    }
};