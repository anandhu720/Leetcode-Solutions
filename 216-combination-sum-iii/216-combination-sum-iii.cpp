class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(1,n,k,n,ans,temp);
        return ans;
    }
    
    void dfs(int index,int target,int k,int n,vector<vector<int>> &ans,vector<int> &temp) {
        
        if(k == 0) {
            if(target == 0) {
                ans.push_back(temp);
            }
            
            return;
        }
        
        
        for(int i=index;i<n;i++) {
            if(i > 9) break;
            temp.push_back(i);
            dfs(i+1,target - i,k-1,n,ans,temp);
            temp.pop_back();
        }
        
    }
};