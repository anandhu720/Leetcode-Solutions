class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int wordLength = 0;
        bool lastWordFound = false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ' ' && lastWordFound == false) continue;
            if(lastWordFound = true && s[i] == ' ') break;
            lastWordFound = true;
            wordLength++;
        }
        return wordLength;
    }
};