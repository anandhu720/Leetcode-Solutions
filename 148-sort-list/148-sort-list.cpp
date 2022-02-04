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
    ListNode* sortList(ListNode* head) {
        if(!head) return nullptr;
        map<int,int> map;
        ListNode *p = head;
        while(p){
            map[p->val]++;
            p=p->next;
        }
        
        p = head;
        auto it = map.begin();
        while(p){
           if(it->second == 1){
               p->val = it->first;
               it++;
           }else{
               p->val = it->first;
               it->second--;
           }
            p = p->next;
        }
        
        return head;
    }
};