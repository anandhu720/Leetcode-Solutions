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
    void dfs(TreeNode *root,int &count,int curr) {
        if(root) {
            if(root->val >= curr) {
                count++;
                curr = root->val;
            }
            
            dfs(root->left,count,curr);
            dfs(root->right,count,curr);
        }
    }
public:
    int goodNodes(TreeNode* root) {
        int count = 0;
        dfs(root,count,INT_MIN);
        return count;
    }
};