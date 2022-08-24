class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> umap;
        for(auto it : tasks) umap[it]++;
        
        priority_queue<int> pq;
        for(auto it : umap) pq.push(it.second);
        
        queue<pair<int,int>> q; // no,time
        
        long long time = 0;
        
        while(pq.size() > 0 or !q.empty()) {
            
            time += 1;
            
            if(pq.size() > 0) {
                int x = pq.top(); pq.pop();
                if(x-1 > 0)
                    q.push({x-1,time+n});
            }
            
            if(!q.empty()) {
                auto x = q.front();
                if(x.second == time) {
                    q.pop();
                    pq.push(x.first);
                }
            }
            
        }
        
        return time;
        
        
    }
};