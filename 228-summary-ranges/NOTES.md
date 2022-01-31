```
class Solution {
public:
vector<string> summaryRanges(vector<int>& nums) {
if(nums.size() == 0) return {};
vector<string> ans;
int start = nums[0];
for(int i=1;i<nums.size();i++){
if(nums[i-1]+1 != nums[i]){
if(nums[i-1] != start){
string temp = to_string(start)+"->"+to_string(nums[i-1]);
start = nums[i];
ans.push_back(temp);
}else{
ans.push_back(to_string(start));
start = nums[i];
}
}
}
if(start != nums[nums.size()-1]){
string temp = to_string(start)+"->"+to_string(nums[nums.size()-1]);
ans.push_back(temp);
}else{
ans.push_back(to_string(nums[nums.size()-1]));
}
return ans;
}
};
```