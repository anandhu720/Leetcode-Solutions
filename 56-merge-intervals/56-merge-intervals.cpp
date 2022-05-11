class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        
        int i=1;
        while(i<intervals.size()) {
            
            if(intervals[i][0] > intervals[i-1][1]) {
                ans.push_back(intervals[i-1]);
            }else{
                int right = max(intervals[i-1][1],intervals[i][1]);
                int left = min(intervals[i-1][0],intervals[i][0]);
                intervals[i] = {left,right};
            }
            
            i++;
            
        }
        
        ans.push_back(intervals[i-1]);
        
        return ans;
    }
};