class Solution {
public:
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        ListNode * l1 = ha,*l2 = hb;
        while(l1!=l2){
            if(l1==nullptr) l1 = hb;
            else l1 = l1->next;
            if(l2==nullptr) l2 = ha;
            else l2 = l2->next;
        }
        return l1;
    }
};