class Solution {
public:
    ListNode * rev(ListNode*root){
        if(root==nullptr || root->next==nullptr) return root;
        ListNode * res = rev(root->next);
        root->next->next = root;
        root->next = nullptr;
        return res;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * f= head,*s = head;
        while(f->next and f->next->next)
        {
            s=s->next;
            f=f->next->next;
        }
        s->next = rev(s->next);
        ListNode *root = head;
        s=s->next;
        while(s){
            if(root->val!=s->val) return false;
            root = root->next;
            s=s->next;
        }
        return true;
    }
};