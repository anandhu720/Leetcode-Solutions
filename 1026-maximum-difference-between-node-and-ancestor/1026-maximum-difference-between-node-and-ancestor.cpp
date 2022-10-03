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
    int diff = 0;
    void dfs(TreeNode *root,int maxi,int mini) {
        
        diff = max(diff,max(abs(root->val - maxi),abs(root->val - mini)));
        
        if(root->left)
            dfs(root->left,max(root->val,maxi),min(root->val,mini));
        if(root->right)
            dfs(root->right,max(root->val,maxi),min(root->val,mini));
        
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val);
        return diff;
    }
};