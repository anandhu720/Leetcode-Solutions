class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& t, int len) {
        int j=0,cover = 0;
        sort(t.begin(),t.end());
        int res = 0;
        
        for(int i=0;i<t.size() and res < len;) {
            
            if(j == i || t[j][0] + len > t[i][1]) {
                cover += min(len,t[i][1] - t[i][0] + 1);
                res = max(res,cover);
                i++;
            }else{
                int partial = max(0,t[j][0] + len - t[i][0]);
                res = max(res,cover+partial);
                cover -= (t[j][1] - t[j][0] + 1);
                j++;
            }
            
        }
        
        return res;
    }
};