class Solution {
private:
    bool compare(string &word1,string &word2) {
        if(word1.length() != word2.length()+1) return false;
        
        int a=0,b=0;
        
        while(a < word1.length()) {
            if(b < word2.length() and word1[a] == word2[b]) {
                a++;
                b++;
            }else a++;
        }
        
        if(a == word1.length() and b == word2.length()) return true;
        return false;
    }
    static bool comp(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }
public:
    
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),comp);
        
        vector<int> dp(words.size(),1);
        
        for(int i=0;i<words.size();i++) {
            int maxi = 1;
            for(int j=0;j<i;j++) {
                if(compare(words[i],words[j]))
                    maxi = max(maxi,1+dp[j]);
            }
            dp[i] = maxi;
        }
        
        int ans = 1;
        for(auto it : dp) ans = max(ans,it);
        
        return ans;
        
    }
};