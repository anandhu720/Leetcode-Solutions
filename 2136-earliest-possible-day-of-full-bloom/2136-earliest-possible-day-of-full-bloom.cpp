class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
        if(a[1] == b[1]) {
            return a[0] < b[0];
        }
        return a[1] < b[1];
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<vector<int>> nums;
        
        for(int i=0;i<plantTime.size();i++) {
            nums.push_back({plantTime[i],growTime[i]});
        }
        
        sort(nums.begin(),nums.end(),comp);
        
        int days = 0;
        
        for(auto it : nums) {
            
            if(it[1] > days) days = it[1];
            
            days += it[0];
        }
        
        return days;
    }
};