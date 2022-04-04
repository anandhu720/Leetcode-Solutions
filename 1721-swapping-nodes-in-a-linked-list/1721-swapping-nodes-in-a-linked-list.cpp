class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *prev = head, *nxt = head;
        for(int i = 1; i <= k - 1; i++)
            nxt = nxt->next;
        ListNode *marker1 = nxt;
        while(nxt->next)
        {
            prev = prev->next;
            nxt = nxt->next;
        }
        swap(prev->val, marker1-> val);
        return head;
    }
};

