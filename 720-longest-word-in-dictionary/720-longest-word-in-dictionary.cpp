class Solution {
public:
    string longestWord(vector<string>& words) {
        map<string,bool,greater<>> umap;
        sort(words.begin(),words.end());
        
        for(auto it : words) {
            if(it.size() == 1) {
                umap[it] = true;
                continue;
            }
            
            string x = it;
            x.pop_back();
            
            if(umap.find(x) != umap.end()) {
                umap[it] = true;
            }
        }
        
        int max_length = 0;
        string ans;
        
        for(auto it : umap) {
            if(it.first.length() >= max_length) {
                max_length = it.first.length();
                ans = it.first;
            }
        }
        
        return ans;
    }
};