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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> nums(10,0);
        return dfs(root,nums);
    }
    
    int dfs(TreeNode *root,vector<int> &nums) {
                
        if(root->left == NULL and root->right == NULL){
            nums[root->val]++;
            int noOdd = 0;
            for(auto it : nums) {
                if(it%2 != 0) noOdd++;
            }
            
            nums[root->val]--;
            
            if(noOdd > 1) return 0;
            return 1;
            
        }
        
        
        nums[root->val]++;
        int left = 0;
        if(root->left) left = dfs(root->left,nums);
        int right = 0;
        if(root->right) right = dfs(root->right,nums);
        nums[root->val]--;
        
        return left+right;

    }
};