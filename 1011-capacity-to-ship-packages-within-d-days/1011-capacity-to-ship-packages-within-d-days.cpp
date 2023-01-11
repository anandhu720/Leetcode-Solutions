class Solution {
public:
    bool dfs(int mid,vector<int> &weights,int days) {
        int cnt = 1;
        int sum = 0;
        for(auto it : weights) {
            if(sum+it > mid) {
                sum = it;
                cnt++;
            }else{
                sum += it;
            }
        }
        
        return cnt <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end()),right = 0;
        for(auto it : weights) right += it;
        
        int ans = right;
        
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,weights,days)) {
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return ans;
    }
};