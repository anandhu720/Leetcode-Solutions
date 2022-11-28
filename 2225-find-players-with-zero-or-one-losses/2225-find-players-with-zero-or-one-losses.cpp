class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> lost;
        set<int> winner;
        for(auto it : matches) winner.insert(it[0]);
        
        for(auto it : matches) {
            if(winner.count(it[1]) > 0) {
                winner.erase(it[1]);
            }
            lost[it[1]]++;
        }
        
        vector<vector<int>> ans;
        vector<int> w,l;
        for(auto it : winner) w.push_back(it);
        for(auto it : lost) {
            if(it.second == 1) {
                l.push_back(it.first);
            }
        }
        
        ans.push_back(w);
        ans.push_back(l);
        
        return ans;
    }
};