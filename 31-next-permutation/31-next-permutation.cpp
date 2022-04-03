class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1)
            return;
        
        int index1 = -1;
        int index2 = -1;
        
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        
        
        if(index1 == -1){
            sort(nums.begin(),nums.end());
            return;
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        
        // cout<<nums.size()-2<<" "<<index2<<endl;
        
        swap(nums[index1],nums[index2]);
        
        sort(nums.begin()+index1+1,nums.end());
    }
};