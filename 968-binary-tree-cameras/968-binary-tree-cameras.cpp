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
    int minCameraCover(TreeNode *root) {
        return dfs(root);
    }
    int dfs(TreeNode* root,bool hasCamera = false,bool isMonitored = false) {
        
        if(!root) return 0;
        if(hasCamera) return 1 + dfs(root->left,false,true) + dfs(root->right,false,true);
        if(isMonitored) {
            int noCam = dfs(root->left,false,false) + dfs(root->right,false,false);
            int rCam = 1 + dfs(root->left,false,true) + dfs(root->right,false,true);
            return min(noCam,rCam);
        }
        
        if(root->val != 0) return root->val;  //cacheing
        
        int rootCam = 1 + dfs(root->left,false,true) + dfs(root->right,false,true);
        int leftCam = root->left == NULL ? 1e9 : 
                        dfs(root->left,true,false) + dfs(root->right,false,false);
        int rightCam = root->right == NULL ? 1e9 :
                        dfs(root->left,false,false) + dfs(root->right,true,false);
        
        return root->val = min(rootCam,min(leftCam,rightCam));
        
    }
};