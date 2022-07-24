void func(int &ans,BinaryTreeNode<int> *node,int key)
{
    while(node)
    {
        if(node->data<key)node=node->right;
        else
        {
            ans = node->data;
            node=node->left;
        }
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    int ans = -1 ;
    func(ans,node,x);
    return ans;
}