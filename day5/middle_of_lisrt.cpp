 ListNode* middleNode(ListNode* head) {
        ListNode *s = head,*f=head;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }