class Solution {
public:
    // Using max heap and queue
    // Time = O(t.size() * m) m = n
    //here n = [0,100] ,so we can avoid it
    int leastInterval(vector<char>& t, int n) {
        unordered_map<char,int> umap;
        for(auto it : t) umap[it]++;
        vector<int> v;
        for(auto it : umap) v.emplace_back(it.second);
        
        make_heap(v.begin(),v.end());
        
        int time = 0;
        
        queue<pair<int,int>> q; // {no , time}
        
        while(v.size() != 0 or !q.empty()) {
            
            time += 1;
            
            if(v.size() != 0) {
                int cnt = v.front() - 1;
                pop_heap(v.begin(),v.end());
                v.pop_back();
                if(cnt) {
                    q.push({cnt,time+n});
                }
            }
            
            if(!q.empty()) {
                auto it = q.front();
                if(it.second == time) {
                    q.pop();
                    v.push_back(it.first);
                    push_heap(v.begin(),v.end());
                }
            }
            
        }
        
        return time;
    }
};