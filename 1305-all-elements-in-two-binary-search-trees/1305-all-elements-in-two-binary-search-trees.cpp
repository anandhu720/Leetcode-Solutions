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
    void inorder(TreeNode *root,vector<int> &in) {
        if(!root) return;
        
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> in1,in2;
        inorder(root1,in1);
        inorder(root2,in2);
        
        vector<int> ans;
        
        int i=0,j=0;
        while(i < in1.size() and j < in2.size()) {
            if(in1[i] < in2[j]) {
                ans.push_back(in1[i++]);
            }else{
                ans.push_back(in2[j++]);
            }
        }
        
        while(i < in1.size()) ans.push_back(in1[i++]);
        while(j < in2.size()) ans.push_back(in2[j++]);
        
        return ans;
    }
};