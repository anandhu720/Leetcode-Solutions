/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
private:
    void dfs(unordered_map<int,Employee*> &umap,int id,int &res) {
        
        Employee *it = umap[id];

        res += it->importance;
                
        for(auto i : it->subordinates) {
            dfs(umap,i,res);
        }
                
    }
public:
    int getImportance(vector<Employee*> emp, int id) {
        int res = 0;
        unordered_map<int,Employee*> umap;
        for(auto it : emp) umap[it->id] = it;
        dfs(umap,id,res);
        return res;
    }
};