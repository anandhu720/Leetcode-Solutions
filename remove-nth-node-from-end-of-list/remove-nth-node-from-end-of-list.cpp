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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return nullptr;
        ListNode *p=head,*q=head,*r=nullptr;
        while(p && n--) p=p->next;
        //if n == last index nned to delete first element
        if(!p){
            head=q->next;
            return head;
        }
        
        while(p){
            r=q;
            q=q->next;
            p=p->next;
        }
        r->next= q->next;  
        return head;
    }
};