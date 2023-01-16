class Solution {
    static bool comp(vector<int> &a,vector<int> &b) {
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> nums;
        
        int left = 0,right = 1;
        while(right < intervals.size()) {
            if(intervals[left][1] < intervals[right][0]) {
                nums.push_back(intervals[left]);
                left = right;
                right++;
            }else{
                intervals[left][1] = max(intervals[right][1],intervals[left][1]);
                right++;
            }
        }
        
        nums.push_back(intervals[left]);
        return nums;
    }
};

/*

[1,2][3,10][4,8][6,7][8,10][12,16]

*/