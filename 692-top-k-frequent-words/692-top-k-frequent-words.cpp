class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> umap;
        for(auto it : words) umap[it]++;
        
       auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        };
        typedef priority_queue< pair<string,int>, vector<pair<string,int>>, decltype(comp) > my_priority_queue_t;
        my_priority_queue_t  pq(comp);
        
        
        for(auto it : umap) {
            pq.push({it.first,it.second});
            
            if(pq.size() > k) pq.pop();
        }
        
        vector<string> ans;
        while(!pq.empty()) {
            ans.insert(ans.begin(),pq.top().first);
            pq.pop();
        }
        
        
        return ans;
    }
};