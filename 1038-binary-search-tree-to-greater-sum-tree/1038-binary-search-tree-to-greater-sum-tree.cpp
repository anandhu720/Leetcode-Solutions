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
private:
    void dfs(TreeNode *root,int &val) {
        
        if(root->right != NULL) {
            dfs(root->right,val);
        }
        
        root->val += val;
        val = root->val;
        
        if(root->left != NULL) {
            dfs(root->left,val);
        }
        
    } 
public:
    TreeNode* bstToGst(TreeNode* root) {
        int val = 0;
        dfs(root,val);
        return root;
    }
};