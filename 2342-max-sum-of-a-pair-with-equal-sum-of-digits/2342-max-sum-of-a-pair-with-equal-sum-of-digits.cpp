class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int maxSum = -1;
        
        unordered_map<int,int> umap;
        
        for(auto it : nums) {
            
            int currNum = it;
            int currSum = 0;
            
            while(currNum) {
                currSum += currNum%10;
                currNum /= 10;
            }
            
            if(umap.find(currSum) != umap.end()) {
                maxSum = max(maxSum,it+umap[currSum]);
                umap[currSum] = max(umap[currSum],it);
            }else{
                umap[currSum] = it;
            }
            
        }
        
        return maxSum;

    }
};