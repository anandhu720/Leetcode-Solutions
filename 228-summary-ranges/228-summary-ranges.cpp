class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.size()==0){
            return v;        
        }
        int start = nums[0], n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 || nums[i] + 1 != nums[i + 1])
            {
                if (start == nums[i])
                {
                v.push_back(to_string(start));
                }
                else
                {
                    v.push_back(to_string(start) + "->" + to_string(nums[i]));
                }
                if (i < n - 1)
                    start = nums[i + 1];
            }
        }
        return v;  
    }
};