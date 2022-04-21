class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> umap;
        int length = 0,l=0,r=0;
        
        while(r < s.length()) {
            umap[s[r]]++;
            
            int maxi = 0;
            for(auto it : umap) {
                maxi = max(maxi,it.second);
            }
            
            while((r-l+1) - maxi > k) {
                umap[s[l]]--;
                l++;
            }
            
            length = max(length,r-l+1);
            r++;
        }
        
        return length;
    }
};