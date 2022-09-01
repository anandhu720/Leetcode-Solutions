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
    map<int,map<int,multiset<int>>> umap;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> ans;
        
        for(auto it : umap) {
            vector<int> col;
            for(auto i : it.second) {
                col.insert(col.end(),i.second.begin(),i.second.end());
            }
            
            ans.push_back(col);
        }
        
        return ans;
    }
    
    void dfs(TreeNode *root,int vlevel,int level) {
        
        if(!root) return;
        
        umap[vlevel][level].insert(root->val);
        
        dfs(root->left,vlevel-1,level+1);
        dfs(root->right,vlevel+1,level+1);
    } 
};