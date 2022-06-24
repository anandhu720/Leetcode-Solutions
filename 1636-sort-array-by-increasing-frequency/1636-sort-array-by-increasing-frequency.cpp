class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto ele : nums) umap[ele]++;
        
        priority_queue<pair<int,int>> pq;
        for(auto it : umap) pq.push({-it.second,it.first});
        
        vector<int> ans;
        
        while(!pq.empty()) {
            auto x = pq.top(); pq.pop();
            
            int freq = abs(x.first);
            while(freq--) ans.push_back(x.second);
        }
        
        return ans;
    }
};