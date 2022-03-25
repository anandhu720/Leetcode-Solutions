class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),
            [](vector<int> &a,vector<int> &b) {
                return (a[0]-a[1] < b[0]-b[1]);
            });
        
        int n = costs.size();
        int total = 0;
        int i=0;
        while(i < n/2) {
            total += costs[i][0];
            i++;
        }
        while(i < n) {
            total += costs[i][1];
            i++;
        }
        
        return total;
    }
};