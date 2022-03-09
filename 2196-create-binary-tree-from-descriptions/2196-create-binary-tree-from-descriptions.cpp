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
    TreeNode* createBinaryTree(vector<vector<int>>& nums) {
        unordered_map<int,TreeNode*> umap;
        unordered_set<int> uset;
        
        for(int i=0;i<nums.size();i++){
            uset.insert(nums[i][1]); //adding to set.
            
            TreeNode* root = nullptr;
            if(umap.find(nums[i][0]) != umap.end()){
                root = umap[nums[i][0]];
            }else{
                root = new TreeNode(nums[i][0]);
            }
            
            TreeNode* child = nullptr;
            if(umap.find(nums[i][1]) != umap.end()){
                child = umap[nums[i][1]];
            }else{
                child = new TreeNode(nums[i][1]);
            }
            
            if(nums[i][2] == 1)
                root->left = child;
            else
                root->right = child;
            
            umap[root->val] = root;
            umap[child->val] = child;
        }
        
        for(auto it : umap){
            if(uset.find(it.first) == uset.end())
                return umap[it.first];
        }
        
        return nullptr;
    }
};