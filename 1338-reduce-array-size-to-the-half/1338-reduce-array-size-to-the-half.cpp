class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> umap;
        
        int len = arr.size()/2;
        for(int i=0;i<arr.size();i++) {
            umap[arr[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it : umap)
            pq.push({it.second,it.first});
        
        int count = 0;
        int ans = 0;
        
        while(!pq.empty()) {
            if(count >= len) break;
            
            pair<int,int> x = pq.top();
            pq.pop();
            
            count += x.first;
            ans+=1;
        }
        
        return ans;

    }
};