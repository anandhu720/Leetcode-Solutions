class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int l = 0,r = 0,length = 0;
        
        while(r < s.length()) {
            
            if(umap.find(s[r]) != umap.end()) {
                if(umap.find(s[r])->second+1 > l) {
                    l = umap[s[r]]+1;
                }
            }
            
            umap[s[r]] = r;
            length = max(length,r-l+1);
            r++;
            
        }
        
        return length;
    }
};