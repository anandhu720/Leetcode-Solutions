class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0,right = 0;
        int localSum = 0,maxSum = 0;
        
        
        while(right < n-k-1) right++;
        
        for(int i=right;i<n;i++) localSum += cardPoints[i];
        
        if(n == k) return localSum;
        
                
        while(right < n) {
            
            localSum -= cardPoints[right];
            
            maxSum = max(maxSum,localSum); 
            
            localSum += cardPoints[left++];
            
            right++;
            
        }
        
        return maxSum;
    }
};