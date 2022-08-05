 bool hasCycle(ListNode *head) {
        if(head==nullptr) return false;
        ListNode * f = head,*s=head;
        while(f->next and f->next->next)
        {
            s=s->next;
            f=f->next->next;
        }
        s=head;
        while(s!=f)
        {
            s=s->next;
            f=f->next;
        }
        return s;
        return false;
    }