class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int> umap;
        for(auto it : barcodes) {
            umap[it]++;
        }
        priority_queue<pair<int,int>> pq;
        
        for(auto it : umap) pq.push({it.second,it.first});
        
        pair<int,int> prev = {0,0};
        
        vector<int> ans;
        
        while(!pq.empty()) {
            auto curr = pq.top(); pq.pop();
            
            ans.emplace_back(curr.second);
            
            curr.first -= 1;
            
            if(prev.first != 0) pq.push(prev);
            
            prev = curr;
            
        }
        
        return ans;
    }
};