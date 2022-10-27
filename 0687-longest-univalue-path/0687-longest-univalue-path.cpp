class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int maxi = INT_MIN;
        if(!root) return 0;
        dfs(root,maxi);
        return maxi;
    }
    
    int dfs(TreeNode *root,int &maxi) {  
        
        if(!root) return 0;
        
        int left = dfs(root->left,maxi);
        int right = dfs(root->right,maxi);
        
        int leftcheck = 0, rightcheck = 0;
        if(root->left != NULL && root->val == root->left->val) leftcheck = left+1;
        if(root->right != NULL && root->val == root->right->val) rightcheck = right+1; 
        
        maxi = max(maxi,leftcheck+rightcheck);
        
        return max(leftcheck,rightcheck);
        
        
    }
};