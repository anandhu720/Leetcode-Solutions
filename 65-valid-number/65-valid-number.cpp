class Solution {
public:
    bool isNumber(string s) {
        
        int i;
               
        // check e
        i = s.length()-1;
        while(i >= 0 && (s[i] != 'e' && s[i] != 'E')) --i;
        
        if(i > 0) {
            // has e at i
            // i+1 to n-1 should be integer
            bool isValidInteger = isInt(s, i+1, s.length()-1, false);
            if(!isValidInteger) return false;
        } else {
            i = s.length();
        }
        
        return isInt(s, 0, i-1, true);
        
    }
    
        bool isInt(string s, int start, int end, bool isFloat) {

        if(end - start < 0 ) return false;
        
        if(s[start] == '-' || s[start] == '+') ++start;
        
        int valid_nums = 0;
        
        for(int i = start; i <= end; i++) {
            if(isFloat && s[i] == '.') {
                isFloat = false;
            }
            else if( !(s[i] >= '0' && s[i] <= '9') ) 
                return false;
            else 
                ++valid_nums;
        }
        return valid_nums > 0;
    }
};


