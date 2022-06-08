class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length() == 0) return 0;
        
        return s == string(s.rbegin(),s.rend()) ? 1 : 2;
    }
};