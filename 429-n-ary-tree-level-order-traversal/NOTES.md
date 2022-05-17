public:
vector<vector<int>> levelOrder(Node* root) {
if(!root) return {};
vector<vector<int>> ans;
queue<Node *> q;
q.push(root);
while(!q.empty()) {
int size = q.size();
vector<int> local;
for(int i=0;i<size;i++) {
Node *temp = q.front(); q.pop();
local.push_back(temp->val);
for(auto it : temp->children) {
q.push(it);
}
}
ans.push_back(local);
}
return ans;
}
};
```