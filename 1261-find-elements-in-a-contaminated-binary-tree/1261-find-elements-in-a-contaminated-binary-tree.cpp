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
class FindElements {
public:
    void dfs(TreeNode *root,int depth = 0) {
        if(root->left) {
            uset.insert(2*depth+1);
            dfs(root->left,2*depth+1);
        }
        if(root->right) {
            uset.insert(2*depth+2);
            dfs(root->right,2*depth+2);
        }
    }
    unordered_set<int> uset;
    FindElements(TreeNode* root) {
        if(root) {
            uset.insert(0);
            dfs(root);
        }
    }
    
    bool find(int target) {
        return uset.count(target) > 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */