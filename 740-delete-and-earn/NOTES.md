```
class Solution {
public:
/**
*   @author : Anandha Krishnan
*   Time = O(nlogn) Space = O(n)
*/
int deleteAndEarn(vector<int>& nums) {
//storing values in map
unordered_map<int,int> count;
for(auto it: nums) count[it]++;
//sort array
sort(nums.begin(),nums.end());
//removing duplicates
auto it = unique(nums.begin(),nums.end());
nums.resize(distance(nums.begin(),it));
int earn1 = 0;
int earn2 = 0;
for(int i=0;i<nums.size();i++){
int currEarn = nums[i] * count[nums[i]];
if(i>0 && nums[i] == nums[i-1]+1){ //cannot add the previous element
int temp = earn2;
earn2 = max(earn1+currEarn,earn2);
earn1 = temp;
}else{  //can add the previous element
int temp = earn2;
earn2 = currEarn + earn2;
earn1 = temp;
}
}
return earn2;
}
};
```