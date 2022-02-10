class Solution {
public:
    bool isSubstring(string s1, string s2)
    {
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
    }
 
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(auto s:patterns)
        {
          if(isSubstring(s,word))
              c++;
        }
        return c;
    }
};