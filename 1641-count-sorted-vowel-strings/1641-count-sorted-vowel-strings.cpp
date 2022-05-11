class Solution {
public:
    int countVowelStrings(int n) {
        vector<char> vowels = {'a','e','i','o','u'};
        return dfs(0,n,vowels);
    }
    
    int dfs(int index,int n,vector<char> &vowels) {
        
        if(n == 0) {
            return 1;
        }
        
        int count = 0;
        for(int i=index;i<vowels.size();i++) {
            count += dfs(i,n-1,vowels);
        }
        
        return count;
    }
};