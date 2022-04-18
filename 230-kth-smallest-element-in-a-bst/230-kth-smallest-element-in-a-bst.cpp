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
    void in(TreeNode* root,int &k,int &ans){
        if(root){
            in(root->left,k,ans);
            if(k-- == 1){
                ans = root->val;
                return;
            }
            in(root->right,k,ans);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        in(root,k,ans);
        
        return ans;
    }
};