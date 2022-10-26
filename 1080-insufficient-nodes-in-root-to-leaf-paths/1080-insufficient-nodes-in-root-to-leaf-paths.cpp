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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        int sum = 0;
        int x = dfs(root,NULL,limit,sum);
        return x == 4 ? NULL : root;
    }
    
    int dfs(TreeNode *root,TreeNode *parent,int limit,int sum) {
        
        if(!root) return 0;
        
        int left = dfs(root->left,root,limit,sum+root->val);
        int right = dfs(root->right,root,limit,sum+root->val);
        
        sum += root->val;
        
        if((left == 0 and right == 0 and sum < limit) or (left != 2 and right != 2 and (left == 1 or right == 1))) {
            if(parent == NULL) {
                root = NULL;
                return 4;
            }
            if(parent->left and parent->left == root) {
                parent->left = NULL;
                return 1;
            }
            if(parent->right and parent->right == root) {
                parent->right = NULL;
                return 1;
            }
        }
        
        return 2;
    }
};