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
    void dfs(TreeNode *root,string &s) {
        
        if(!root->left and !root->right) {
            return;
        }
        
        if(root->left) {
            s += '(';
            s += to_string(root->left->val);
            dfs(root->left,s);
            s += ')';
        }
        
        if(!root->left and root->right) {
            s += "()(";
            s += to_string(root->right->val);
            dfs(root->right,s);
            s += ')';
        }else if(root->right) {
            s += '(';
            s += to_string(root->right->val);
            dfs(root->right,s);
            s += ')';
        }
        
        
    }
    string tree2str(TreeNode* root) {
        if(!root->left and !root->right) return to_string(root->val);
        
        string s;
        s += to_string(root->val);
        dfs(root,s);
        
        return s;
    }
};