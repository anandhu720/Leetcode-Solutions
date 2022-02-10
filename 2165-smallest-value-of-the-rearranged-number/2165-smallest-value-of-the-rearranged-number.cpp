class Solution {
public:
    long long smallestNumber(long long num) {
        long long temp = num;
        long long ans = 0;
        if(num == 0) return 0;
        vector<long long> nums;
        if(num < 0) num = num*-1;
        while(temp != 0){
            nums.push_back(temp%10);
            temp /= 10;
        }
        
        if(num > 0){
            sort(nums.begin(),nums.end());
            if(nums[0] == 0){
                for(int i=1;i<nums.size();i++)
                    if(nums[i] != 0){
                        swap(nums[0],nums[i]);
                        break;
                    } 
            }
            
            for(int i=0;i<nums.size();i++){
                ans = ans*10 + nums[i];
            }
        }
        else{
            sort(nums.begin(),nums.end());
            for(int i=nums.size()-1;i>=0;i--){
                ans = ans*10 + nums[i];
            }
            // ans = 0 - ans;
        }
        
        return ans;
    }
};