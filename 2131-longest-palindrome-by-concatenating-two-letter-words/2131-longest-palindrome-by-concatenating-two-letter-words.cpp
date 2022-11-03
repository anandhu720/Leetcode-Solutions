class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt = 0;
        int extra = 0;
        unordered_map<string,int> umap;
        for(auto it : words) umap[it]++;
        
        for(int i=0;i<words.size();i++) {
            string s = words[i];
            reverse(s.begin(),s.end());
            
            if(umap.count(words[i]) == 0) continue;
            
            if(umap.count(s) > 0) {
                if(words[i] == s and umap[s] < 2) {
                    extra++;
                    continue;
                }
                cnt += 4;
                umap[s]--;
                if(umap[s] == 0) umap.erase(s);
                umap[words[i]]--;
                if(umap[words[i]] == 0) umap.erase(words[i]);
            }
        }
        if(extra > 0) cnt +=2;
        return cnt;
    }
};