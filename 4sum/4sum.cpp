class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                
                int key = target-(nums[i]+nums[j]);
                int start = j+1;
                int end = n-1;
                
                while(start<end){
                    
                    if(nums[start]+nums[end] == key){
                        vector<int> temp = {nums[i],nums[j],nums[start],nums[end]};
                        ans.push_back(temp);
                        
                        //eliminating duplicates
                        while(start<end && nums[start]==temp[2]) start++;
                        while(start<end && nums[end]==temp[3]) end--;
                    }else if (nums[start]+nums[end] < key) start++;
                    else end--;
                } 
                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};