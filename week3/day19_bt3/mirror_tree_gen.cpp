   //push left right
   //swap the left and ight 
    void mirror(Node* node) {
    if(node==nullptr) return;
    queue<Node*> q;
    q.push(node);
    while(q.size())
    {
        Node* ndy = q.front();q.pop();
        if(ndy->left) q.push(ndy->left);
        if(ndy->right) q.push(ndy->right);
        swap(ndy->left,ndy->right);
    }
    }