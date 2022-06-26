class Solution {
public:
    int kadens(vector<int> &n1,vector<int> &n2) {
        
        int sum = 0,res = 0;
        for(int i=0;i<n1.size();i++) {
            sum = max(n2[i] - n1[i], sum+(n2[i] - n1[i]));
            res = max(res,sum);
        }
        
        return res;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        return max(
            accumulate(begin(nums1),end(nums1),0) + kadens(nums1,nums2),
            accumulate(begin(nums2),end(nums2),0) + kadens(nums2,nums1)
        );
    }
};