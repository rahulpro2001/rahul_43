class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rem  = 0;
        ListNode *res = new ListNode(0);
        ListNode *temp = res;
        while(l1 || l2 || rem){
            int sum = 0;
            if(l1) {sum += l1->val;l1=l1->next;}
            if(l2) {sum += l2->val;l2=l2->next;}
            if(rem)sum += rem;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
            rem = sum/10;
        }
        return res->next;
    }
};