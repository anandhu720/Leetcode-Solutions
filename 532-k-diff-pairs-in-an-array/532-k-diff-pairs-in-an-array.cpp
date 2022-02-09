class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int i:nums)
            umap[i]++;
        int ans=0;
        for(auto x:umap)
        {
            if(k==0)
            {    
                if(x.second>1)
                ans++;
            }
             else if(umap.find(x.first+k)!=umap.end())
                ans++;
        }
        
        return ans;
    }
};
