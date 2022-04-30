class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        vector<vector<int>> ans;
        
        int i=0;
        for(;i<intervals.size();i++) {
            if(newIntervals[1] < intervals[i][0]) {
                ans.push_back(newIntervals);
                break;
            }else if(newIntervals[0] > intervals[i][1]) {
                ans.push_back(intervals[i]);
            }else{
                int left = min(intervals[i][0],newIntervals[0]);
                int right = max(intervals[i][1],newIntervals[1]);
                newIntervals[0] = left;
                newIntervals[1] = right;
            }
        }
        
        if(i == intervals.size()) ans.push_back(newIntervals);
        else for(;i<intervals.size();i++) ans.push_back(intervals[i]);
        
        return ans;
    }
};