class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        
        for(auto it : ransomNote) umap1[it]++;
        for(auto it : magazine) umap2[it]++;
        
        for(auto it : umap1) {
            if(umap2.find(it.first) == umap2.end()) return false;
            if(umap2[it.first] < it.second) return false;
        }
        
        return true;
    }
};