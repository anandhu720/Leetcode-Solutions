```
class Solution {
public:
TreeNode* sortedListToBST(ListNode* head) {
vector<int> arr;
while(head) {
arr.push_back(head->val);
head = head->next;
}
TreeNode *root = dfs(0,arr.size()-1,arr);
return root;
}
TreeNode * dfs(int start,int end,vector<int> &arr) {
if(start > end) return nullptr;
int mid = start + (end - start)/2;
TreeNode *root = new TreeNode(arr[mid]);
root->left = dfs(start,mid-1,arr);
root->right = dfs(mid+1,end,arr);
return root;
}
};
```