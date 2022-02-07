class Solution {
public:
    void helper(int index,vector<int> &arr,vector<vector<int>> &ans){
        
        //base condition
        if(index == arr.size()){
            ans.push_back(arr);
            return;
        }
        
        //loop through
        for(int i=index;i<arr.size();i++){
            //do
            swap(arr[index],arr[i]);
            //recur
            helper(index+1,arr,ans);
            //undo
            swap(arr[index],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0,nums,ans);
        return ans;
    }
};