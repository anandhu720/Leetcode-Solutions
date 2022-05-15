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
    pair<int,int> x = {-1,0};  // level,sum
    int deepestLeavesSum(TreeNode* root) {
        dfs(root,0);
        return x.second;
    }
    
    void dfs(TreeNode *root,int level) {
        
        if(!root) return;
        
        dfs(root->left,level+1);
        dfs(root->right,level+1);
        
        if(level > x.first) {
            x.second = root->val;
            x.first = level;
        }else if(level == x.first) {
            x.second += root->val;
        }
    }
};