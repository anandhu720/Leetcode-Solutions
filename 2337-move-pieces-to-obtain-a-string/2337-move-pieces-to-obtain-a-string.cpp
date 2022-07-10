class Solution {
public:
    bool canChange(string start, string end) {
        int s = 0,e = 0,l = start.length();
        
        while(true) {
            while(s < l and start[s] == '_') s++;
            while(e < l and end[e] == '_') e++;
            
            if(s == l or e == l) return s == l and e == l;
            
            if(start[s] != end[e]) return false;
            if(start[s] == 'R' and s > e) return false;
            if(start[s] == 'L' and e > s) return false;
            s++;
            e++;
        }
        
        return true;
    }
};