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
    int sumEvenGrandparent(TreeNode* root) {
        return dfs(root);
    }
    
    int dfs(TreeNode *root,int p = 1,int gp = 1) {
        return root ? 
dfs(root->left,root->val,p) + dfs(root->right,root->val,p) + (gp%2 == 0 ? root->val : 0) : 0;
    }

};