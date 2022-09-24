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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(root,targetSum,ans,ds);
        return ans;
    }
    
    void helper(TreeNode* root,int target,vector<vector<int>> &ans,vector<int> &ds){
        
        if(!root) return;
        
        //do
        target -= root->val;
        ds.push_back(root->val);
        
        if(!root->left && !root->right && target == 0){
            ans.push_back(ds);
        }
        
        //recur
        helper(root->left,target,ans,ds);
        helper(root->right,target,ans,ds);
        
        ds.pop_back();
        
    }
};