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
    void dfs(TreeNode *root,vector<int> &nums) {
        if(!root) return;
        
        dfs(root->left,nums);
        nums.push_back(root->val);
        dfs(root->right,nums);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        dfs(root,nums);
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++) {
            if(umap.count(k - nums[i]) > 0) return true;
            umap[nums[i]] = i;
        }
        
        return false;
    }
};