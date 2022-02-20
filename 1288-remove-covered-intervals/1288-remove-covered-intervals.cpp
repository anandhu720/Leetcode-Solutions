class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int curr[] = {-1,-1};
        int result = 0;
        for(auto in : intervals){
            if(in[0] > curr[0] and in[1] > curr[1]){
                result++;
                curr[0] = in[0];
            }
            curr[1] = max(curr[1],in[1]);
        }
        return result;
    }
};