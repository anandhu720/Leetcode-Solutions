class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        
        for(auto it : magazine) umap[it]++;
        
        for(auto it : ransomNote) {
            if(umap.find(it) == umap.end()) return false;
            umap[it]--;
            if(umap[it] == 0) umap.erase(it);
        }
        
        return true;
    }
};