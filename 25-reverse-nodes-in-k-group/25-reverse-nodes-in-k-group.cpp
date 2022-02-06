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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<ListNode*> st;
        
        auto current = head;
        ListNode* prev = nullptr;
        
        while(current){
            int count=0;
            ListNode *temp = current;
            while(current && count<k){
                st.push(current);
                count++;
                current = current->next;
            }
            
            if(st.size() != k){
                prev->next = temp;
                return head;
            }
            
            while(!st.empty()){
                if(prev == nullptr){
                    prev= st.top(); st.pop();
                    head = prev;
                }else{
                    prev->next = st.top(); st.pop();
                    prev= prev->next;
                }
            }
        }
        prev->next = nullptr;
        return head;
        
    }
};

