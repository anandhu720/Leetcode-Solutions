class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> arr;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                arr.push_back({i+j,j,nums[i][j]}); // {sum,col,value}
            }
        }
        
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(arr[i][2]);
        }
        
        return ans;
    }
};