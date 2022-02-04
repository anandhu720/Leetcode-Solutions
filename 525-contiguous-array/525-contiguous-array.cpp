class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) nums[i] = -1;
        }
        
        unordered_map<int,int> map; //prefixSum -> index
        map[0] = -1;
        
        int prefixSum = 0;
        int maxLength = 0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i]; 
            if(map.find(prefixSum) != map.end()){
                maxLength = max(maxLength,i - map[prefixSum]);
            }else{
                map[prefixSum] = i;
            }
        }
        return maxLength;
    }
};