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
    bool isValidBST(TreeNode* root) {
        return dfs(root,NULL,NULL);
    }
    
    bool dfs(TreeNode *root,TreeNode *leftMax,TreeNode *rightMin) {
        if(!root) return true;
        
        if((leftMax and leftMax->val >= root->val) or (rightMin and rightMin->val <= root->val) )
            return false;
        
        return dfs(root->left,leftMax,root) and dfs(root->right,root,rightMin);
    }
};