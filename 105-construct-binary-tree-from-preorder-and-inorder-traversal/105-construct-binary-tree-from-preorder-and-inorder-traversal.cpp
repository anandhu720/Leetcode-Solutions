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
    TreeNode * fn(int ps,int pe,vector<int> &pre,int is,int ie,map<int,int> &inMap) {
        
        if(ps > pe or is > ie) return NULL;
        
        TreeNode *root = new TreeNode(pre[ps]);
        
        int inRoot = inMap[pre[ps]];
        int inLeft = inRoot - is;
        
        root->left = fn(ps+1,ps+inLeft,pre,is,inRoot-1,inMap);
        root->right = fn(ps+inLeft+1,pe,pre,inRoot+1,ie,inMap);
        
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inMap;
        
        for(int i=0;i<inorder.size();i++) inMap[inorder[i]] = i;
        
        TreeNode *root = fn(0,preorder.size()-1,preorder,0,inorder.size()-1,inMap);
        
        return root;
    }
};