class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> umap;
        for(auto it : nums) umap[it]++;
        
        int last_checked = -1,opened = 0;
        
        queue<int> q;
        
        for(auto it : umap) {
            int i = it.first;
            if((opened > 0 and last_checked+1 != i) or opened > it.second) 
                return false;
            
            q.push(it.second - opened);
            
            last_checked = i;
            opened = umap[i];
            if(q.size() == k) {
                opened -= q.front();
                q.pop();
            }
        }
        
        return opened == 0;
    }
};