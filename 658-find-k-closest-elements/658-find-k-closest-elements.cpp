class Solution {
public:
    // total time = nlogk + klogk ~ nlogk
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<arr.size();i++) {
            pq.push({abs(x-arr[i]),arr[i]});
            
            if(pq.size() > k) pq.pop();
        }
        
        vector<int> ans;
        
        while(!pq.empty()) {  // nlogk
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(),ans.end()); // klogk
        return ans;
    }
};