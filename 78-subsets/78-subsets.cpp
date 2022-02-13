class Solution {
public:
    void helper(int index,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        
        for(int i=index;i<arr.size();i++){
            ds.push_back(arr[i]); //do
            ans.push_back(ds);
            helper(i+1,arr,ans,ds); //recur
            ds.pop_back(); //undo
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(0,nums,ans,ds);
        ans.push_back({});
        return ans;
    }
};