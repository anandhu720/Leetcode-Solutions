class Solution {
private:
    vector<int> ans;
    void merge(int left,int mid,int right,vector<pair<int,int>> &nums) {
        
        int j = mid+1;
        for(int i=left;i<=mid;i++) {
            while(j <= right and nums[i].first > nums[j].first) j++;
            ans[nums[i].second] += (j - (mid+1));
        }
        
        vector<pair<int,int>> tmp;
        int low = left,high = mid + 1;
        while(low <= mid and high <= right) {
            if(nums[low].first < nums[high].first) {
                tmp.push_back(nums[low++]);
            }else{
                tmp.push_back(nums[high++]);
            }
        }
        
        while(low <= mid) tmp.push_back(nums[low++]);
        while(high <= right) tmp.push_back(nums[high++]);
        
        for(int i=left;i<=right;i++) {
            nums[i] = tmp[i-left];
        }
        
    }
    void mergeSort(int left,int right,vector<pair<int,int>> &nums) {
        if(left >= right) return;
        
        int mid = left + (right - left)/2;
        
        mergeSort(left,mid,nums);
        mergeSort(mid+1,right,nums);
        
        merge(left,mid,right,nums);
    }
public:
    vector<int> countSmaller(vector<int>& n) {
        ans.resize(n.size(),0);
        vector<pair<int,int>> nums;
        
        for(int i=0;i<n.size();i++) {
            nums.push_back({n[i],i});
        }
        
        mergeSort(0,nums.size()-1,nums);
        return ans;
        
    }
};