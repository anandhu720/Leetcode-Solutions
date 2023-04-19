class Solution {
private:
    unordered_map<int,int> freq;
    unordered_map<int,vector<int>> umap;
    vector<vector<int>> dp;
    bool dfs(int node,int parent,int dest) {
        freq[node] += 1;
        
        if(node == dest) return true;  
        
        for(auto it : umap[node]) {
            if(parent != it)
                if(dfs(it,node,dest)) return true;
        }
        
        freq[node] -= 1;
        return false;
    }
    
    int ok(int node,int parent,int canHalf,vector<int> &price) {
        
        //leaf node
        if(umap[node].size() == 1 and umap[node][0] == parent) {
            if(canHalf == 1) {
                // cout<<node<<" "<<freq[node] * (price[node]/2)<<endl;
                return freq[node] * (price[node]/2);
            }
            // cout<<node<<" "<<freq[node] * price[node]<<endl;
            return freq[node] * price[node];
        } 
        
        
        if(dp[node][canHalf] != -1) return dp[node][canHalf];
        
        
        int halfPrice = 1e9,fullPrice = (freq[node] * price[node]);
        for(auto it : umap[node]) {
            if(it != parent) {
                fullPrice += ok(it,node,1,price);
            }
        }
        
        if(canHalf == 1) {   
            halfPrice = (freq[node] * (price[node]/2));
            for(auto it : umap[node]) {
                if(it != parent) {
                    halfPrice +=  ok(it,node,0,price);
                }
            }
        }
        
        // cout<<node<<" "<<halfPrice<<" "<<fullPrice<<endl;
        
        return dp[node][canHalf] = min(halfPrice,fullPrice);
    }
public:
    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
        
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        for(auto it : trips) {
            dfs(it[0],-1,it[1]);
        }
        
        dp.resize(n,vector<int>(2,-1));
        
        return ok(0,-1,1,price);
        
    }
};

