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
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        unordered_map<int,Employee*> umap;
        
        for(auto it : employees) {
            umap[it->id] = it;
        }
        
        int res = 0;
        
        queue<int> q;
        q.push(id);
        
        while(!q.empty()) {
            int currId = q.front(); q.pop();
            
            Employee *it = umap[currId];

            res += it->importance;
            for(auto i : it->subordinates) {
                q.push(i);
            }

        }
        
        return res;
    }
};