##### Brute force using set
​
```
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
void pre(TreeNode *root,unordered_set<int> &uset) {
if(root) {
uset.insert(root->val);
pre(root->left,uset);
pre(root->right,uset);
}
}
void make(TreeNode *root,unordered_set<int> &uset) {
if(root) {
int val = root->val;
for(auto it : uset) {
if(it > val) root->val += it;
}
make(root->left,uset);
make(root->right,uset);
}
}
TreeNode* convertBST(TreeNode* root) {
unordered_set<int> uset;
pre(root,uset);
make(root,uset);
return root;
}
};
```