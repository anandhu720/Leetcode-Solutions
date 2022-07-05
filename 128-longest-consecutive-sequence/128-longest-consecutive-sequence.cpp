class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        int longestLength = 0;
        
        for(int i=0;i<nums.size();i++)
            set.insert(nums[i]);
        
        for(int i=0;i<nums.size();i++){
            
            if(set.find(nums[i]-1) == set.end()){
                
                int currentLength = 1;
                int number = nums[i];
                
                while(set.find(number+1) != set.end()){
                    number++;
                    currentLength++;
                }
                
                longestLength  = max(longestLength,currentLength);
            }
        }
        
        return longestLength;
    }
};