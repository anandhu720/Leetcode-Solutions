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
    int count(ListNode *p){
        int node = 0;
        while(p!=NULL){
            node++;
            p=p->next;
        }
        return node;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int n = count(head);
        k=k%n;
        while(k>0){
            ListNode *p = head;
            ListNode *q = NULL;
            
            while(p->next != NULL){
                q=p;
                p=p->next;
            }
            
            p->next = head;
            q->next = NULL;
            head = p;
            k--;
        }
        return head;
    }
};