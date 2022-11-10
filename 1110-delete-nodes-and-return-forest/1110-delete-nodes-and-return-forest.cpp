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
    unordered_map<TreeNode *,TreeNode *> parent;
    void makeParent(TreeNode *root) {
        if(!root) return;
        
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        
        makeParent(root->left);
        makeParent(root->right);
    }
    void set(TreeNode *root) {
        if(parent.count(root) == 0) return;
        if(parent[root]->left == root) {
            parent[root]->left = NULL;
        }
        if(parent[root]->right == root) {
            parent[root]->right = NULL;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode *> ans;
        
        
        makeParent(root);
        unordered_set<int> uset(to_delete.begin(),to_delete.end());
        
        queue<TreeNode *> q;
        
        if(uset.count(root->val) == 0)
            ans.push_back(root);
        
        q.push(root);
        
        while(!q.empty()) {
            TreeNode *node = q.front(); q.pop();
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
            if(uset.count(node->val) > 0) {
                if(node->left and uset.count(node->left->val) == 0) ans.push_back(node->left);
                if(node->right and uset.count(node->right->val) == 0) ans.push_back(node->right);
                set(node);
            }
        }
        
        return ans;
            
    }
};