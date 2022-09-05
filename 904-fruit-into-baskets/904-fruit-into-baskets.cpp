class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int> last_index;
        
        int left = 0;
        int right = 0;
        int maxlen = 0;
        while(right < nums.size()) {
            last_index[nums[right]]++;
            
            while(last_index.size() > 2) {
                last_index[nums[left]]--;
                if(last_index[nums[left]] == 0) {
                    last_index.erase(nums[left]);
                }
                left++;
            }
            
            maxlen = max(maxlen,right-left+1);
            right++;
        }
        
        
        return maxlen;
    }
};