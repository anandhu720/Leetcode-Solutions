/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *dummy = new ListNode(INT_MIN);
        ListNode *h = dummy;
        ListNode *p = head->next;
        int sum = 0;
        
        while(p) {
            if(p->val == 0) {
                ListNode *tmp = new ListNode(sum);
                h->next = tmp;
                h = tmp;
                sum = 0;
            }
            
            sum += p->val;
            p = p->next;
            
        }
        
        return dummy->next;
    }
};