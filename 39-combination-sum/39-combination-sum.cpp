class Solution {
public:
    void combination(int index,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        
        //base condition
        if(index == arr.size()){
            return;
        }
        
        if(target == 0){
            ans.push_back(ds);
            return;
        }
       
        if(arr[index] <= target){ //pick element
            ds.push_back(arr[index]);
            combination(index,target - arr[index],arr,ans,ds);
            ds.pop_back();
        }
        
        combination(index+1,target,arr,ans,ds); //not picking
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(0,target,candidates,ans,ds);
        return ans;
    }
};