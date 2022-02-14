class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int evenHash[100001] = {0};
        int oddHash[100001] = {0};
        
        
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0)
                evenHash[nums[i]]++;
            else
                oddHash[nums[i]]++;
            
            maxi = max(maxi,nums[i]);
        }
        
        int firstOddValue = 0,secondOddValue = 0;
        int firstOddfreq = 0,secondOddfreq = 0;
        int firstEvenValue = 0,secondEvenValue = 0;
        int firstEvenfreq = 0,secondEvenfreq = 0;
        
        for(int i=1;i<=maxi;i++){
            if(evenHash[i] > firstEvenfreq){
                secondEvenfreq = firstEvenfreq;
                secondEvenValue = firstEvenValue;
                firstEvenfreq = evenHash[i];
                firstEvenValue = i;
            }else if(evenHash[i] > secondEvenfreq){
                secondEvenfreq = evenHash[i];
                secondEvenValue = i;
            }
            
            if(oddHash[i] > firstOddfreq){
                secondOddfreq = firstOddfreq;
                secondOddValue = firstOddValue;
                firstOddfreq = oddHash[i];
                firstOddValue = i;
            }else if(oddHash[i] > secondOddfreq){
                secondOddfreq = oddHash[i];
                secondOddValue = i;
            }
        }
        
        if(firstOddValue != firstEvenValue)
            return nums.size() - firstOddfreq - firstEvenfreq;
        
        return min(nums.size()-firstEvenfreq-secondOddfreq,nums.size()-firstOddfreq-secondEvenfreq);
        
    }
};