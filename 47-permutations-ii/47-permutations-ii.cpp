class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> temp;
        helper(0,nums,temp);
        vector<vector<int>> ans;
        for(auto it : temp) ans.push_back(it);
        return ans;
    }
    void helper(int index,vector<int> &arr,set<vector<int>> &ans){
        
        //base condition
        if(index == arr.size()){
            ans.insert(arr);
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

};
