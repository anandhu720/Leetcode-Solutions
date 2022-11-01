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
    void in(TreeNode *root,vector<int> &inorder) {
        if(!root) return;
        
        in(root->left,inorder);
        inorder.push_back(root->val);
        in(root->right,inorder);
    }
    TreeNode * create(int left,int right,vector<int> &inorder) {
        if(left > right) return NULL;
        
        int mid = left + (right - left)/2;
        
        TreeNode *root = new TreeNode(inorder[mid]);
        
        root->left = create(left,mid-1,inorder);
        root->right = create(mid+1,right,inorder);
        
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        in(root,inorder);
        
        return create(0,inorder.size()-1,inorder);
    }
};