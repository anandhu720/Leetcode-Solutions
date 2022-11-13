class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        
        for(int i=0;i<s.length();i++) {
            if(s[i] != ' ') {
                string word = "";
                
                while(i < s.length() and s[i] != ' '){
                    word += s[i];
                    i++;
                }
                
                word.push_back(' ');
                word += ans;
                ans = word;
            }
        }
        
        ans.pop_back();
        return ans;
    }
};