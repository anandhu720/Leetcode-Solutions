class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans = "";
        bool flag = true;
        while(i<word1.length() and j<word2.length()){
            if(flag == true)
                ans += word1[i++];
            else
                ans += word2[j++];
            flag = !flag;
        }
        
        for(;i<word1.length();i++) ans += word1[i];
        for(;j<word2.length();j++) ans += word2[j];
        
        return ans;
    }
};