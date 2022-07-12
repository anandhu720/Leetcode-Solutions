class Solution {
private:
    bool dfs(int i,vector<int> &ms,vector<int> &sides,int length) {
          
        if(i == ms.size()) return true;
        
        for(int j=0;j<4;j++) {
            if(sides[j] + ms[i] <= length) {
                sides[j] += ms[i];
                if(dfs(i+1,ms,sides,length)) return true;
                sides[j] -= ms[i];
            }
        }
        
        return false;
    }
public:
    bool makesquare(vector<int>& ms) {
        
        int sum = 0;
        for(auto it : ms) sum += it;
        
        if(sum%4 != 0) return false;
        
        int length = sum/4;
        vector<int> sides(4,0);
        
        sort(ms.begin(),ms.end(),greater<int>());
        
        return dfs(0,ms,sides,length);

    }
};