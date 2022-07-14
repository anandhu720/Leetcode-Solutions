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
        
        int res = 0;
        
        queue<int> q;
        q.push(id);
        
        while(!q.empty()) {
            int currId = q.front(); q.pop();
            
            for(auto it : employees) {
                if(currId == it->id) {
                    res += it->importance;
                    for(auto i : it->subordinates) {
                        q.push(i);
                    }
                    break;
                }
            }
        }
        
        return res;
    }
};