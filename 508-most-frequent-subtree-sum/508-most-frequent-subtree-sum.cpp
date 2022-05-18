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
    int dfs(TreeNode *root,unordered_map<int,int> &umap) {
        
        if(!root) return 0;
        
        int left = dfs(root->left,umap);
        int right = dfs(root->right,umap);
        
        int sum = root->val + left + right;
        
        umap[sum]++;
        
        return sum;
        
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int> umap;
        dfs(root,umap);
        
        int maxi = INT_MIN;
        for(auto it : umap) {
            maxi = max(it.second,maxi);
        }
        
        vector<int> ans;
        for(auto it : umap) {
           if(it.second == maxi) ans.emplace_back(it.first); 
        }
        
        return ans;
    }
};