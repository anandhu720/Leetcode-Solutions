class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> umap;
        for(auto it : tasks) umap[it]++;
        int count = 0;
        
        for(auto it : umap) {
            if(it.second < 2) return -1;
            
            while(it.second > 0) {
                if(it.second == 3) {
                    count++;
                    it.second -= 3;
                }else if(it.second >3 and it.second-3 >= 2) {
                    count++;
                    it.second -= 3;
                }else {
                    count++;
                    it.second -= 2;
                }
            }
            
        }
        
        return count;
        
        
    }
};