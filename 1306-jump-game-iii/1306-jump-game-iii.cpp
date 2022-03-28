class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        unordered_set<int> visited;
        return dfs(start,arr,visited);
    }
    
    bool dfs(int index,vector<int> &arr,unordered_set<int> &visited) {
        
        if(index >= arr.size() or index < 0 or visited.count(index)) return false;
        if(arr[index] == 0) return true;
        
        visited.insert(index);
        
        bool add = dfs(index+arr[index],arr,visited);
        bool sub = dfs(index-arr[index],arr,visited);
        
        return (add or sub);
    }
};