/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(Node* root) {
        dfs(root,0);
        return ans;
    }
    
    void dfs(Node *root,int level) {
        
        if(!root) return;
        if(ans.size() == level) ans.emplace_back();  //need to add new level
        ans[level].push_back(root->val);
        
        for(auto it : root->children) {
            dfs(it,level+1);
        }
        
    }
};