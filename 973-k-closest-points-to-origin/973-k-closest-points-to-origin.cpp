class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> pq;
        
        for(auto it : points) {
            int dist = pow(it[0],2) + pow(it[1],2);
            pq.push({dist,it});
            
            if(pq.size() > k) pq.pop();
        }
        
        vector<vector<int>> res;
        
        while(!pq.empty()) {
            auto x = pq.top(); pq.pop();
            
            res.push_back(x.second);
        }
        
        return res;
    }
};