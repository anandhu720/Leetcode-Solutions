class Solution {
public:
    bool bfs(int src,int n, vector<int>& left, vector<int>& right) {
        vector<bool> vis(n,false);
        
        queue<int> q;
        q.push(src);
        vis[src] = true;
        
        while(!q.empty()) {
            int node = q.front(); q.pop();
            
            if(left[node] != -1) {
                if(vis[left[node]]) return false;
                vis[left[node]] = true;
                q.push(left[node]);
            }
            
            if(right[node] != -1) {
                if(vis[right[node]]) return false;
                vis[right[node]] = true;
                q.push(right[node]);
            }
        }
        
        for(auto it : vis) {
            if(it == false) return false;
        }
        
        return true;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& left, vector<int>& right) {
        unordered_set<int> uset(left.begin(),left.end());
        
        for(auto it : right) uset.insert(it);
        
        if(uset.size() < n) return false; // more than one root
        
        int root = 0;
        for(int i=0;i<n;i++) 
            if(uset.count(i) == 0) {
                root = i;
                break;
            }
        
        return bfs(root,n,left,right);
    }
};