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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        bool ans = dfs(root,target);
        if(ans == true) return NULL;
        return root;
    }
    
    bool dfs(TreeNode *root,int k) {
        if(!root) return true;
        
        if(!root->left and !root->right) {
            if(root->val == k) return true;
            return false;
        }
        
        bool left = dfs(root->left,k);
        bool right = dfs(root->right,k);
        
        if(left == true) {
            root->left = NULL;
        }
        if(right == true) {
            root->right = NULL;
        }
        
        return left and right and root->val == k;
    }
};