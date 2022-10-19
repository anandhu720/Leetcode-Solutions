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
    void dfs(TreeNode *root,int val,int &ans) {
        
        if(!root) return;
        
        if(root->val > val) {
            if(ans == -1) ans = root->val;
            else
                ans = min(ans,root->val);
        }
        
        dfs(root->left,val,ans);
        dfs(root->right,val,ans);
        
    }
    int findSecondMinimumValue(TreeNode* root) {
        int ans = -1;

        dfs(root,root->val,ans);
        return ans;
    }
};