class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int maxh=0,curr=0;
        for(int i=0;i<gain.size();i++){
            curr=curr+gain[i];
            if(curr>maxh)
                maxh=curr;
        }
        return maxh;
    }
};