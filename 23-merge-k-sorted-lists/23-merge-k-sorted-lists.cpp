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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int> > pq;
        
        for(int i=0;i<lists.size();i++){
            ListNode *p= lists[i];
            while(p){
                pq.push(p->val);
                p=p->next;
            }
        }
        
        ListNode *head = nullptr;
        ListNode *p = nullptr;
        while(!pq.empty()){
            int value = pq.top(); pq.pop();
            auto temp = new ListNode(value);
            if(!head){
                head = temp;
                p = head;
                continue;
            }
            p->next = temp;
            p = temp;
        }
        
        return head;
    }
};