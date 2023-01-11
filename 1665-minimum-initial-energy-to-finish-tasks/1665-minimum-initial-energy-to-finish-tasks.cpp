class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
        if((a[1] - a[0]) > (b[1] - b[0])) return true;
        return false;
    }
    bool dfs(int mid,vector<vector<int>> &nums) {
        for(auto it : nums) {
            if(mid < it[1]) return false;
            mid -= it[0];
        }
        return mid >= 0;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),comp);
        int left = 0,right = 1e9;
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,tasks)) {
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
};
