class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>> umap;
        
        int i = 0;
        int count = 0;

        for(auto x : s) {
            umap[x].emplace_back(i++);
        }
        
        for(int i=0;i<words.size();i++) {
            string curr = words[i];
            
            int latest = -1;
            
            for(int j=0;j<curr.size();j++) {
                
                auto it = upper_bound(umap[curr[j]].begin(),umap[curr[j]].end(),latest);
                
                if(it == umap[curr[j]].end()) break;
                
                latest = *it;
                
                if(j == curr.size()-1) count++;
            }
        }
        
        return count;
    }
};