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
private:
    void dfs(TreeNode *root,set<string> &temp,string s) {
    
        if(root->left == NULL and root->right == NULL) {
            s += root->val + 'a';
            reverse(s.begin(),s.end());
            temp.insert(s);
            return;
        }
        
        s.push_back(root->val + 'a');
        if(root->left)
            dfs(root->left,temp,s);
        if(root->right)
            dfs(root->right,temp,s);
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        set<string> temp;
        string s = "";
        
        dfs(root,temp,s);
        
        
        return *temp.begin();
    }
};