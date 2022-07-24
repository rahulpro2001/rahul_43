//if lvl equal hai vector k size k to push krdo aise hi right view mei root right left hoga 
void func(Node *root,vector<int> &ans,int lvl)
{
    
    if(root!=nullptr){
         if(ans.size()==lvl) ans.push_back(root->data);
         func(root->left,ans,lvl+1);
         func(root->right,ans,lvl+1);
    }
  
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   func(root,ans,0);
   return ans;
}