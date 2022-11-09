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
    vector<TreeNode *> nums;
    void bfs(TreeNode *root) {
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty()) {
            vector<TreeNode *> tmp;
            int size = q.size();
            for(int i=0;i<size;i++) {
                TreeNode *node = q.front(); q.pop();
                tmp.push_back(node);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            nums = tmp;
        }
    }
    TreeNode *lca(TreeNode *root,TreeNode *p,TreeNode *q) {
        if(!root or root == p or root == q) return root;
        
        TreeNode *left = lca(root->left,p,q);
        TreeNode *right = lca(root->right,p,q);
        
        if(!left) return right;
        if(!right) return left;
        return root;
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        bfs(root);
        if(nums.size() == 1) return nums[0];
        TreeNode *left = nums[0],*right = nums[nums.size()-1];
        
        return lca(root,left,right);
    }
};