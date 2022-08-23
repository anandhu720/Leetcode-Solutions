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
    bool isPalindrome(ListNode* head) {
        ListNode *p = head;
        
        stack<ListNode *> st;
        
        while(p) {
            st.push(p);
            p = p->next;
        }
        
        p = head;
        
        while(p) {
            int val = st.top()->val;
            
            st.pop();
            
            if(val != p->val) return false;
            
            p = p->next;
        }
        
        return true;
    }
};