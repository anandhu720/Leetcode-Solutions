class Solution {
public:
    int dfs(int mid,vector<int> &nums) {
        vector<int> tmp = nums;
        unordered_set<int> vis;
        
        int prev = 0;
        int i = 1;
        for(i=1;i<tmp.size();i++) {
            
            if(tmp[i] - tmp[prev] <= mid) {
                continue;
            }
            if(i-1 == prev) return false;
            prev = i-1;
            vis.insert(i-1);
            i--;
        }
        
        if(i != tmp.size()) return false;
        
        
        prev = nums.size()-1;
        for(i=tmp.size()-2;i>=0;i--) {
            if(vis.count(i) > 0) continue;
            if(tmp[prev] - tmp[i] <= mid) {
                continue;
            }
            int j = i+1;
            while(vis.count(j) > 0) j++;
            if(j >= prev) return false;
            prev = j;
            vis.insert(j);
            i++;
        }
        if(i >= 0) return false;
        
        return true;
    }
    int maxJump(vector<int>& nums) {
        int left = 0,right = nums[nums.size()-1] - nums[0];
        int res = right;
        
        while(left <= right) {
            int mid = left + (right - left)/2;
            // cout<<mid<<endl;
            if(dfs(mid,nums)) {
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return res;
    }
};
