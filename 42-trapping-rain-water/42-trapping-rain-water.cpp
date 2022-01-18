class Solution {
public:
    /**
    * @author Anandha Krishnan
    * Time = O(n) Space = O(n) {Dynamic Programming}
    */
    int trap(vector<int>& heights) {
        vector<int> maxes(heights.size(),0);
        int leftMax = 0;
        for(int i=0;i<maxes.size();i++){
            int height = heights[i];
            maxes[i] = leftMax;
            leftMax = max(leftMax,height);
        }
        int rightMax = 0;
        for(int i=maxes.size()-1;i>=0;i--){
            int height = heights[i];
            int minHeight = min(maxes[i],rightMax);
            if(minHeight > height){
                maxes[i] = minHeight - height;            
            }else{
                maxes[i] = 0;
            }
            
            rightMax = max(rightMax,height);
        }
        
        int total = 0;
        for(auto it : maxes) total += it;
        return total;
    }
};