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
    void createParent(TreeNode *root,unordered_map<TreeNode *,TreeNode *> &parent) {
        
        if(!root) return;
        
        if(root->left) parent[root->left] = root;
        if(root->right) parent[root->right] = root;
        
        createParent(root->left,parent);
        createParent(root->right,parent);
    }
    
    TreeNode * findRoot(TreeNode *root,int start) {
        if(!root) return NULL;
        
        if(root->val == start) return root;
        
        TreeNode *left = findRoot(root->left,start);
        TreeNode *right = findRoot(root->right,start);
        
        if(!left) return right;
        return left;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode *,TreeNode *> parent;
        parent[root] = NULL;
        createParent(root,parent);
        
        TreeNode *curr = findRoot(root,start);
        
        unordered_set<TreeNode *> vis;
        queue<TreeNode *> q;
        
        q.push(curr);
        vis.insert(curr);
        
        long long totalTime = 0;
        while(!q.empty()) {
            
            int size = q.size();
            totalTime += 1;
            
            for(int i=0;i<size;i++) {
                TreeNode *tmp = q.front(); q.pop();
                
                if(tmp->left and vis.find(tmp->left) == vis.end()) {
                    q.push(tmp->left);
                    vis.insert(tmp->left);
                }
                
                if(tmp->right and vis.find(tmp->right) == vis.end()) {
                    q.push(tmp->right);
                    vis.insert(tmp->right);
                }
                
                if(parent[tmp] and vis.find(parent[tmp]) == vis.end()) {
                    q.push(parent[tmp]);
                    vis.insert(parent[tmp]);
                }
                
            }
        }
        
        
        return totalTime-1;
        
        
    }
};