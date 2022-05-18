class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0;
        
        for(int i=1;i<colors.length();i++) {
            if(colors[i] == colors[i-1]) {
                if(neededTime[i-1] <= neededTime[i]) res += neededTime[i-1];
                else {
                    res += neededTime[i];
                    neededTime[i] = neededTime[i-1];
                }
            }
        }
        
        return res;
    }
};