class Solution {
public:
    void combination(int index,int target,int k,int n,vector<vector<int>> &ans,vector<int> &ds){
        
        if(k == 0){
            if(target == 0) ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<=n;i++){
            if(i > 9) break;
            ds.push_back(i);
            combination(i+1,target-i,k-1,n,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(1,n,k,n,ans,ds);
        return ans;
    }
};