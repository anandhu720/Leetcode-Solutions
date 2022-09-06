class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int> umap;
        int i = 0,k = s.length()/4,res = s.length();
        
        for(int j=0;j<s.length();j++) umap[s[j]]++;
        
        for(int j=0;j<s.length();j++) {
            umap[s[j]]--;
        while(i < s.length() and umap['Q'] <= k and umap['W'] <= k and umap['E'] <= k and umap['R'] <= k) {
                res = min(res,j-i+1);
                umap[s[i]]++;
                i++;
            }
        }
        
        return res;
    }
};