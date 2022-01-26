class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> mp;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> v;
        for(auto p: mp){
            vector<int> r = p.second;
            reverse(r.begin(), r.end());
            for(int i=0; i<r.size(); i++){
                v.push_back(r[i]);
            }
        }
        return v;
    }
};