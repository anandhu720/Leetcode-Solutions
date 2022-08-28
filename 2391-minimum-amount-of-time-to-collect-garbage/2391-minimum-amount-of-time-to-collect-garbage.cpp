class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        unordered_map<int,int> gmap,mmap,pmap;
        int maxig = -1,maxip = -1,maxim = -1;
        for(int index = 0 ;index<garbage.size();index++) {
            
            for(auto it : garbage[index] ) {
                if(it == 'G') {
                    gmap[index]++;
                    maxig = index;
                }else if(it == 'M') {
                    mmap[index]++;
                    maxim = index;
                }else{
                    pmap[index]++;
                    maxip = index;
                }
            }
            
        }
        
        long long ans = 0;
        //paper truck
        for(int i=0;i<=maxip;i++) {
            if(pmap.count(i) > 0) ans += pmap[i];
            if(i+1  <= maxip)
                ans += travel[i];
        }
        
        //glass
        for(int i=0;i<=maxig;i++) {
            if(gmap.count(i) > 0) ans += gmap[i];
            if(i+1  <= maxig)
                ans += travel[i];
        }
        
        //metal
        for(int i=0;i<=maxim;i++) {
            if(mmap.count(i) > 0) ans += mmap[i];
            if(i+1  <= maxim)
                ans += travel[i];
        }
        
        return ans;
        
    }
};
