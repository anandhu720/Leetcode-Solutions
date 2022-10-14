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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>> st;
        
        ListNode *p = head;
        int len = 0;
        while(p) {
            len++;
            p = p->next;
        }
        
        vector<int> ans(len,0);

        
        p = head;
        int cnt = 0;
        
        while(p) {
            
            while(!st.empty() and p->val > st.top().first) {
                ans[st.top().second] = p->val;
                st.pop();
            }
            
            st.push({p->val,cnt});
            cnt++;
            p = p->next;
        }
        
        return ans;
    }
};