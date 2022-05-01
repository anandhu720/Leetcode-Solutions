class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result1 = "";
        for(auto it : s) {
            if(it == '#') {
                if(result1.length() > 0) result1.pop_back();
            }else result1 += it;
        }
        
        string result2 = "";
        for(auto it : t) {
            if(it == '#') {
                if(result2.length() > 0) result2.pop_back();
            }else result2 += it;
        }
        
        return result1 == result2;
    }
};