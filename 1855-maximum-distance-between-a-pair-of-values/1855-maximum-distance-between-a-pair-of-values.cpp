class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int i=0,j=0;
        int maxi = 0;
        while(i < nums1.size() and j < nums2.size()) {
            if(nums1[i] > nums2[j]) {
                i++;
            }else{
                maxi = max(maxi,j-i);
                j++;
            }
        }
        return maxi;
    }
};