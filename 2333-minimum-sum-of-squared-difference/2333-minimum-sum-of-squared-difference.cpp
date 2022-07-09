class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        map<long long,long long,greater<long long>> umap;  //diff,count
        
        for(int i=0;i<nums1.size();i++) {
            long long diff = abs(nums1[i] - nums2[i]);
            
            umap[diff]++;
        }
        
        int p = k1 + k2;
        
        while(p != 0 and umap.size() > 0) {
            
            auto it = umap.begin();
            
            if(it->first == 0) break;
                        
            long long count = it->second;
            
            if(count > p) {
                it->second = it->second-p;
                
                if(umap.find(it->first-1) != umap.end()) umap[it->first-1] += p;
                else umap[it->first-1] = p;
                
                p = 0;
            }else{
               if(umap.find(it->first-1) != umap.end()) umap[it->first-1] += count;
                else umap[it->first-1] = count;
                
                umap.erase(it);
                
                p -= count;
            }
        }
        
        long long res = 0;
        for(auto it : umap) {
            
            res += (it.first*it.first)*it.second;
        }
        
        return res;
    }
};