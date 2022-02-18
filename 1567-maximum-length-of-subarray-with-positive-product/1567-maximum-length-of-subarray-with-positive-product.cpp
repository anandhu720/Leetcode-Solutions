class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int posative = 0;
        int negative = 0;
        int maxLength = 0;
        
        for(auto num : nums){
            if(num > 0){
                posative += 1;
                if(negative > 0)
                    negative += 1;
            }else if(num < 0){
                if(negative > 0){
                    swap(++negative,++posative);
                }else{
                    negative = posative+1;
                    posative = 0;
                }
            }else{
                posative = 0;
                negative = 0;
            }
            maxLength = max(maxLength,posative);
        }
        
        return maxLength;
    }
};