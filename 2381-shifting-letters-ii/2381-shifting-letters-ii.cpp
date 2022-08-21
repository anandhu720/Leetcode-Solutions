class Solution {
public:
    //line sweep and prefix sum
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> ps(5*1e5,0);
        
        for(auto it : shifts) {
            
            ps[it[0]] = it[2] == 0 ? ps[it[0]] - 1 : ps[it[0]] + 1;
            ps[it[1]+1] = it[2] == 0 ? ps[it[1] + 1] + 1 : ps[it[1] + 1] - 1;
            
        }
        
        for(int i=1;i<s.length()+1;i++) {
            ps[i] += ps[i-1];
        }
        
        for(int i=0;i<s.length()+1;i++) {
            
            int inc = (s[i] - 'a' + ps[i])%26;
            
            //for taking negative mod
            inc = (inc+26)%26;
            
            s[i] = 'a' + inc;
        }
        
        return s;
        
    }
};

