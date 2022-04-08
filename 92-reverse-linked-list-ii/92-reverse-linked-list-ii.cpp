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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int flag = left;
        if(left == right) return head;
        
        ListNode *headDiv = nullptr,*p = head,*q = nullptr,*r = nullptr,*subHead = head;
        
        right -= left; 
        while(left != 1) {
            headDiv = p;
            p = p->next;
            subHead = subHead->next;
            left--;
        }
        
        while(right >= 0) {
            r = q;
            q = p;
            p=p->next;
            q->next = r;
            right--;
        }
        
        // cout<<subHead->val<<" "<<headDiv->val<<" "<<p->val<<" "<<q->val<<endl;
        if(flag != 1) {
            headDiv->next = q;
            subHead->next = p;
        }else{
            head->next = p;
            head = q;
        }
        
        return head;
    }
};