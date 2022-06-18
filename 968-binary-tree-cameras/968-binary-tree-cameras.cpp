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
    /*
      Greedy Approch
      Best way to attain min is to place camera in leaf nodes parents ( in btw )
      
      Node return values meaning
      1 - parent of leaf node, need to put camera
      0 - leaf node
      2 - covered by camera but dont have camera on it
    */
    int noOfCamera = 0;
    int minCameraCover(TreeNode* root) {
        return (dfs(root) == 0 ? 1 : 0) + noOfCamera;
    }
    
    int dfs(TreeNode *root) {
        if(!root) return 2;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        if(left == 0 || right == 0) {
            noOfCamera++;
            return 1;
        }
        
        return (left == 1 || right == 1) ? 2 : 0;
        
    }
};