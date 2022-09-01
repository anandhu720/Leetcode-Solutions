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
    int good = 0;
    int goodNodes(TreeNode* root) {
        int maxi = INT_MIN;
        dfs(root,maxi);
        return good;
    }
    
    void dfs(TreeNode *root,int maxi) {
        if(!root) return;
        
        if(root->val >= maxi) {
            maxi = root->val;
            good+=1;
        }
        
        dfs(root->left,maxi);
        dfs(root->right,maxi);
    }
};