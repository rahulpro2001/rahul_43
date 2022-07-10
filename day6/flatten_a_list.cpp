  Node *mix(Node *l1,Node *l2){
        Node * dumy = new Node(0);
        Node * res = dumy;
        while(l1 and l2){
           if(l1->data<=l2->data){
             res->bottom = l1;
             l1 = l1->bottom;
             res = res->bottom;
           } 
           else
           {
             res->bottom = l2;
             l2 = l2->bottom;
             res = res->bottom;
           }
        }
        
        if(l1==nullptr) res->bottom = l2;
        else res->bottom = l1;
        return dumy->bottom;
    }
    
Node *flatten(Node *root)
{
   if(root->next==nullptr) return root;
   Node * temp = flatten(root->next);
   return mix(root,temp);
}

