class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        priority_queue<int,vector<int>,greater<int>> pq;
        
        unordered_map<int,int> umap;
        vector<int> ans(rains.size(),-1);
        
        for(int i=0;i<rains.size();i++) {
            int day = rains[i];
            
            if(day == 0) {
                pq.push(i);
                continue;
            }
            
            if(umap.count(day) == 0) {
                umap[day] = i;
                continue;
            }
            
            queue<int> q;
            while(!pq.empty() and pq.top() < umap[day]) {
                q.push(pq.top());
                pq.pop();
            }
            
            if(pq.empty()) return {};
            
            ans[pq.top()] = day;
            pq.pop();
            umap[day] = i;
            
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
            
        }
        
        while(!pq.empty()) {
            ans[pq.top()] = 1;
            pq.pop();
        }
        
        return ans;
    }
};