class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int> oddIndex;
        priority_queue<int,vector<int>,greater<int>> evenIndex;
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0)
                evenIndex.push(nums[i]);
            else
                oddIndex.push(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                nums[i] = evenIndex.top(); evenIndex.pop();
            }
            else{
                nums[i] = oddIndex.top(); oddIndex.pop();
            }
        }
        return nums;
    }
};