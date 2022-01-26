class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>> map;
        vector<int> ans;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                map[i+j].push_back(mat[i][j]);
            }
        }
        
        int downFromTop = true;
        for(auto it : map){
            vector<int> r = it.second;
            if(downFromTop == true)
                reverse(r.begin(),r.end());
            for(auto i : r) ans.push_back(i);
            downFromTop = !downFromTop;
        }
        
        return ans;
    }
};