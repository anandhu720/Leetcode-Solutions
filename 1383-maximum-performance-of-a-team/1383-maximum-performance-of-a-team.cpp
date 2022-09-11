class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
        if(a[0] == b[0]) {
            a[1] < b[1];
        }
        return a[0] > b[0];
    }
    int mod = 1e9 + 7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<vector<int>> nums;
        for(int i=0;i<speed.size();i++) {
            nums.push_back({efficiency[i],speed[i]});
        }
        
        sort(nums.begin(),nums.end(),comp);
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        long long sum = 0;
        long long ans = 0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i][1];
            pq.push(nums[i][1]);
            if(pq.size() > k) {
                sum -= pq.top();
                pq.pop();
            }
            
            
            ans = max(ans,sum*nums[i][0]);
        }
        
        return ans%mod;
    }
};