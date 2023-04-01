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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return dfs(preorder,index,INT_MAX);
    }
    
    TreeNode *dfs(vector<int> &nums,int &index,int bound) {
        if(index == nums.size() or nums[index] > bound) return NULL;
        
        TreeNode *root = new TreeNode(nums[index++]);
        root->left = dfs(nums,index,root->val);
        root->right = dfs(nums,index,bound);
        
        return root;
    }
};