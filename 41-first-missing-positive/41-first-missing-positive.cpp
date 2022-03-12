class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool> umap;
        for(auto it : nums) umap[it] = true;
        
        int i = 1;
        while(true) {
            if(umap.find(i) == umap.end())
                return i;
            i++;
        }
        
        return 0;
    }
};