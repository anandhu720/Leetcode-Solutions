class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int gs) {
        map<int,int> umap;
        for(int it : nums) umap[it]++;
        
        queue<int> q;
        int last_checked = -1 ,opened = 0;
        
        for(auto it : umap) {
            int i = it.first;
            if(opened > 0 and i > last_checked+1 or opened > umap[i]) return false;
            q.push(umap[i] - opened);
            last_checked = i; opened = umap[i];
            if(q.size() == gs) {
                opened -= q.front();
                q.pop();
            }
        }
        
        return opened == 0;
    }
};
