class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for(int i=0;i<=s.length();i++){
            if(s[i] == ' ' or i == s.length()){
                reverse(s.begin()+start,s.begin()+i);
                start = -1;
            }
            if(start == -1 and s[i] != ' ')
                start = i;
        }
        
        return s;
    }
};