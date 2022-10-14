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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return nullptr;
        ListNode *p=head->next->next,*q=head;
        while(p && p->next){
            q=q->next;
            p=p->next;
            if(p->next) p=p->next;
        }
        q->next = q->next->next;
        return head;
    }
};