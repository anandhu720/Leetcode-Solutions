class Solution {
public:
    int findLength(ListNode* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        //compute Length
        int len = findLength(head);
        
        //position begPtr at K distance from beg
        ListNode *begPtr = head;
        for(int i = 0; i < k - 1; i++) begPtr = begPtr->next;
        
        //position endPtr at K distance from end
        ListNode *endPtr = head;
        for(int i = 0; i < len - k; i++) endPtr = endPtr->next;
        
        //swap
        swap(begPtr->val, endPtr->val);
        
        return head;
    }
};

/*

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

*/