class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        for(auto it : arr) umap[it]++;
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it : umap) pq.push({it.second,it.first});
        
        int count = 0;
        int ans = 0;
        
        while(!pq.empty()) {
            count += pq.top().first; pq.pop();
            ans += 1;
            
            if(count >= arr.size()/2) break;
        }
        
        return ans;
    }
};