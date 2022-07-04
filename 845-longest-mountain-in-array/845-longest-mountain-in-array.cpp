class Solution {
public:
    int longestMountain(vector<int>& arr) {
        vector<int> up(arr.size(),0),down(arr.size(),0);
        int res = 0;
        
        for(int i=down.size()-2;i>=0;i--) {
            if(arr[i] > arr[i+1]) down[i] = down[i+1] + 1; 
        }
        
        for(int i=1;i<up.size();i++) {
            if(arr[i] > arr[i-1]) up[i] = up[i-1] + 1;
            if(up[i] and down[i]) res = max(res,up[i] + down[i] + 1);
        }
        
        return res;
    }
};