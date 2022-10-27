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
    int res = 0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return res == 0 ? res : res-1;
    }
    
    int dfs(TreeNode *root) {
        if(!root) return 0;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        int ls=0,rs=0;
        
        if(root->left and root->left->val == root->val) {
            ls = 1+left;
        }
        if(root->right and root->right->val == root->val) {
            rs = 1+right;
        }
        if(root->left and root->right and root->left->val == root->right->val) {
            if(root->val == root->left->val) res = max(res,left+right+1);
        }
        
        res = max(res,max(ls,rs));
        
        return max(ls,max(rs,1));
        
    }
};