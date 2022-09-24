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
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> tmp;
        dfs(root,targetSum,tmp);
        return ans;
    }
    
    void dfs(TreeNode *root,int targetSum,vector<int> &tmp) {
        
        if(!root) return;
        if(!root->left and !root->right) {
            tmp.push_back(root->val);
            targetSum -= root->val;
            if(targetSum == 0) ans.push_back(tmp);
            tmp.pop_back();
            return;
        }
        
        
        tmp.push_back(root->val);
        targetSum -= root->val;
        
        
        dfs(root->left,targetSum,tmp);
        dfs(root->right,targetSum,tmp);
        
        tmp.pop_back();
    }
};