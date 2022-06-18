class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<int> prev(nums2.size()+1,0) , curr(nums2.size()+1,0);
        
        for(int i=nums1.size()-1;i>=0;i--) {
            for(int j=nums2.size()-1;j>=0;j--) {  
                if(nums1[i] == nums2[j])  
                    curr[j] = 1 + prev[j+1];
                else
                    curr[j] = max(prev[j],curr[j+1]);
            }
            prev = curr;
        }
        
        return curr[0];
    }
};