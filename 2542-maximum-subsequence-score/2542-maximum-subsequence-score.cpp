class Solution {
private:
    static bool comp(pair<int,int> &a,pair<int,int> &b) {
        return a.first > b.first;
    }
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> nums;
        for(int i=0;i<nums1.size();i++) {
            nums.push_back({nums2[i],nums1[i]});
        }
        
        sort(nums.begin(),nums.end(),comp);
        
        // (4,1)(3,3)(2,1)(1,3)
        priority_queue<int,vector<int>,greater<int>> pq;
        
        long long ans = 0;
        long long sum = 0;
        
        int i=0;
        for(i=0;i<nums.size();i++) {
            sum += nums[i].second;
            pq.push(nums[i].second);
            
            if(pq.size() == k) {
                ans = max(ans,sum*nums[i].first);
                break;
            }
        }
        for(i=i+1;i<nums.size();i++) {
            sum -= pq.top(); pq.pop();
            sum += nums[i].second;
            pq.push(nums[i].second);
            ans = max(ans,sum * nums[i].first);
        }
        
        return ans;
        
    }
};