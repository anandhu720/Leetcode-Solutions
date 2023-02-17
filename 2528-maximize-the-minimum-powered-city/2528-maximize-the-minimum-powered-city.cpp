class Solution {
private:
    bool dfs(long long mid,vector<int> nums,int r,int k) {
        
        int left = 0,right = 0;
        long long sum = 0;
        long long cnt = 0;
        // cout<<"MID "<<mid<<endl;
        while(right < nums.size()) {
            
            sum += nums[right];
            
            // cout<<right<<" "<<left<<" "<<cnt<<" "<<sum<<endl;
            
            if(right - left == 2*r) {
                if(sum < mid) {
                    cnt += (mid - sum);
                    nums[right] += (mid - sum);
                    sum += (mid - sum);
                }
                sum -= nums[left];
                left++;
                
            }
            right++;
        }
        
        return cnt <= (long long)k;
    }
public:
    long long maxPower(vector<int>& tmp, int r, int k) {
        long long res = 0;
        long long left = 0,right = 1e18;
        
        vector<int> nums;
        
        for(int i=0;i<r;i++) nums.push_back(0);
        for(auto it : tmp) nums.push_back(it);
        for(int i=0;i<r;i++) nums.push_back(0);
        
        
        while(left <= right) {
            long long mid = left + (right - left)/2;
            if(dfs(mid,nums,r,k)) {
                res = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        
        return res;
    }
};
