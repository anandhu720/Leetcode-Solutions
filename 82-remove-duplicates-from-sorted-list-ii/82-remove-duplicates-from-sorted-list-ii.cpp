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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = head->next;
        
        while(next != NULL){
            
            if(curr == head && curr->val == next->val){
                while(next != NULL && curr->val == next->val)
                    next=next->next;
                
                if(next == NULL){
                    return NULL;
                }else{
                    head = next;
                    curr = head;
                    next=curr->next;
                    continue;
                }
            }else if(curr->val != next->val){
                prev = curr;
                curr = next;
                next = curr->next;
                continue;
            }else if(curr->val == next->val && curr != head){
                while(next!=NULL && curr->val == next->val)
                    next=next->next;
                if(next == NULL){
                    prev->next = NULL;
                    return head;
                }else{
                    prev->next = next;
                    curr = next;
                    next=curr->next;
                }
            }
            
            
        }
        return head;
    }
};