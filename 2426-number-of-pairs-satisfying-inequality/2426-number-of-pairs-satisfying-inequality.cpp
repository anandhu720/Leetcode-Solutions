class Solution {
public:
    long long merge(int left,int mid,int right,vector<long long> &nums,int diff) {
        
        long long cnt = 0;
        int j = right;
        
//         for(int i=left;i<=mid;i++) {
//             while(j <= right and nums[i] <= nums[j] + diff) j++;
//             cnt += j;
//         }
        
        for(int i=mid;i>=left;i--) {
            while(j >= mid+1 and nums[i] <= nums[j] + diff) j--;
            cnt += 1LL * (right - j);
        }
        
        vector<long long> tmp;
        int low = left,high = mid+1;
        while(low <= mid and high <= right) {
            if(nums[low] <= nums[high])
                tmp.push_back(nums[low++]);
            else
                tmp.push_back(nums[high++]);
        }
        
        while(low <= mid) tmp.push_back(nums[low++]);
        while(high <= right) tmp.push_back(nums[high++]);
        
        for(int i=left;i<=right;i++) {
            nums[i] = tmp[i-left];
        }
        
        return cnt;
    }
    long long mergeSort(int left,int right,vector<long long> &nums,int diff) {
        if(left >= right) return 0;
        
        long long inc = 0;
        int mid = left + (right - left)/2;
        
        inc += mergeSort(left,mid,nums,diff);
        inc += mergeSort(mid+1,right,nums,diff);
        
        inc += merge(left,mid,right,nums,diff);
        
        return inc;
    }
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        vector<long long> nums(nums1.size(),0);
        
        for(int i=0;i<nums1.size();i++) {
            nums[i] = 1LL * (nums1[i] - nums2[i]);
        }
        
        return mergeSort(0,nums.size()-1,nums,diff);
    }
};