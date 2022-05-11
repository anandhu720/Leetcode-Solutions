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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        
        while(head) {
            arr.push_back(head->val);
            head = head->next;
        }
        
        TreeNode *root = dfs(0,arr.size()-1,arr);
        
        return root;
        
    }
    
    TreeNode * dfs(int start,int end,vector<int> &arr) {
        
        if(start > end) return nullptr;
        
        int mid = start + (end - start)/2;
        
        TreeNode *root = new TreeNode(arr[mid]);
        
        root->left = dfs(start,mid-1,arr);
        root->right = dfs(mid+1,end,arr);
        
        return root;
        
    }
};