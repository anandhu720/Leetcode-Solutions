class Solution {
public:
    int blackbox(vector<int> &nums,int mid,int h) {
        long long cnt = 0;
        for(int i=0;i<nums.size();i++) {
            cnt += nums[i]/mid;
            if(nums[i]%mid != 0) cnt += 1; 
        }
        
        return cnt <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
        
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left)/2;
            
            if(blackbox(piles,mid,h)) {
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return ans;
    }
};