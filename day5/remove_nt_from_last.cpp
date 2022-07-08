class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *res = new ListNode(0);
        res->next = head;
        ListNode *f=nullptr,*s=nullptr;
        f=res;s=res;
        while(n--) f=f->next;
        while(f->next){
                s=s->next;
                f=f->next;
        }
        s->next = s->next->next;
        return res->next;
    }
};