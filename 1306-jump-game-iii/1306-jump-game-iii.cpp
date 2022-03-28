class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        unordered_map<int,bool> umap;
        unordered_set<int> visited;
        return dfs(start,arr,umap,visited);
    }
    
    bool dfs(int index,vector<int> &arr,unordered_map<int,bool> &umap,unordered_set<int> &visited) {
        
        if(index >= arr.size() or index < 0 or visited.count(index)) return false;
        if(arr[index] == 0) return true;
        
        if(umap[index]) return umap[index];
        visited.insert(index);
        
        bool add = dfs(index+arr[index],arr,umap,visited);
        bool sub = dfs(index-arr[index],arr,umap,visited);
        
        return umap[index] = (add or sub);
    }
};