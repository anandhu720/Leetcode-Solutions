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
    TreeNode* convertBST(TreeNode* root) {
        int prevValue = 0;
        dfs(root,prevValue);
        return root;
    }
    
    void dfs(TreeNode *root,int &prev) {
        if(root) {
            dfs(root->right,prev);
            root->val += prev;
            prev = root->val;
            dfs(root->left,prev);
        }
    }
};