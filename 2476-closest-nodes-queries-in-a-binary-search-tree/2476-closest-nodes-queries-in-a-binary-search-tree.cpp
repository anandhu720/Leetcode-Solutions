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
    int upper_bound(vector<int> &arr, int N, int X)
{
    int mid;
 
    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;
 
    // Till low is less than high
    while (low < high) {
        // Find the middle index
        mid = low + (high - low) / 2;
 
        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if(X == arr[mid]) return X;
        if (X > arr[mid]) {
            low = mid + 1;
        }
 
        // If X is less than arr[mid]
        // then find in left subarray
        else {
            high = mid;
        }
    }
   
    // if X is greater than arr[n-1]
    if(low < N && arr[low] <= X) {
       low++;
    }
 
    // Return the upper_bound index
    return arr[low];
}
    
    int lower_bound(vector<int> &inorder,int X) {
        int left = 0;
        int right = inorder.size()-1;
        
        int res = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(X >= inorder[mid]) {
                res = inorder[mid];
                left = mid+1;
            }else{
                right = mid - 1;
            }
        }
        return res;
    }
    void dfs(TreeNode *root,vector<int> &in) {
        if(!root) return;
        
        dfs(root->left,in);
        in.push_back(root->val);
        dfs(root->right,in);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> inorder;
        dfs(root,inorder);
        
        
        vector<vector<int>> ans;
        for(auto it : queries) {
            int x = inorder[0] > it ? -1 : lower_bound(inorder,it);
            int y = inorder[inorder.size()-1] < it ? -1 : upper_bound(inorder,inorder.size()-1,it);
            
            ans.push_back({x,y});
        }
        
        return ans;
    }
};