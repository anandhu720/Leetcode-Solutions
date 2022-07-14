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
    void dfs(vector<Employee*> &emp,int id,int &res) {
        
        for(auto it : emp) {
            if(it->id == id) {
                res += it->importance;
                
                for(auto i : it->subordinates) {
                    dfs(emp,i,res);
                }
                
                break;
            }
        }
    }
public:
    int getImportance(vector<Employee*> emp, int id) {
        int res = 0;
        dfs(emp,id,res);
        return res;
    }
};