class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return head;
        int n = 0;
        ListNode *temp = head;
        while(temp) {temp = temp->next;n++;}
        k = k%n;
        k=n-k;
        k--;
        temp = head;
        while(temp)
        {
            if(temp->next==nullptr){ temp->next = head;break;} temp = temp->next;
        }
        temp = head;
        while(k--)temp = temp->next;
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};