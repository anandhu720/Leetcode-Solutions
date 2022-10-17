class Solution {
public:
    bool blackbox(vector<int> &nums,int mid,int n,int k) {
        int cnt = 0;
        int i = 0;
        int local = 0;
        while(i <= nums.size()) {
            if(i == nums.size() or nums[i] > mid) {
                cnt += (int)local/k;
                local  = 0;
            }else{
                local++;
            }
            i++;
        }
        

        return cnt >= n;
    }
    int minDays(vector<int>& nums, int m, int k) {
        
        int left = *min_element(nums.begin(),nums.end());
        int right = *max_element(nums.begin(),nums.end());
        
        int ans = right;
        bool flag = false;
        while(left <= right) {
            int mid = left + (right - left)/2;
            
            if(blackbox(nums,mid,m,k)) {
                flag = true;
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return flag ? ans : -1;
    }
};