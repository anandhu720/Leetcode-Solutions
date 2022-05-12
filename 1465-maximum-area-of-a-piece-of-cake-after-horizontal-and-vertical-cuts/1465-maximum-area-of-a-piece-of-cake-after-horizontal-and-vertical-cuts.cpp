class Solution {
public:
    int maxArea(int h, int v, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h);
        horizontalCuts.push_back(0);
        verticalCuts.push_back(v);
        verticalCuts.push_back(0);

        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        long long int maxh = 0,maxv = 0;
        
        for(int i=1;i<horizontalCuts.size();i++) {
            if(horizontalCuts[i] - horizontalCuts[i-1] > maxh)
                maxh = horizontalCuts[i] - horizontalCuts[i-1];
        }
    
        for(int i=1;i<verticalCuts.size();i++) {
            if(verticalCuts[i] - verticalCuts[i-1] > maxv)
                maxv = verticalCuts[i] - verticalCuts[i-1];
        }
        
        return (maxh*maxv)%1000000007;

    }
};