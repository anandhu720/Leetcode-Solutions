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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root) {
            if(key < root->val) root->left = deleteNode(root->left,key);
            else if(key > root->val) root->right = deleteNode(root->right,key);
            else{
                if(!root->left and !root->right) return NULL;
                else if(!root->left or !root->right) return root->left ? root->left : root->right;
                else {
                    TreeNode *tmp = root->left;
                    while(tmp->right) tmp = tmp->right;
                    int val = root->val;
                    root->val = tmp->val;
                    root->left = deleteNode(root->left,root->val);
                }
            }
        }
        return root;
    }
};