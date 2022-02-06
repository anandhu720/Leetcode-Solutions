```
class Solution {
public:
//Time = O(n) Space = O(n)
int removeDuplicates(vector<int>& nums) {
map<int,int> hash;
for(auto it : nums) hash[it]++;
int i=0;
for(auto it : hash){
if(it.second == 1){
nums[i++] = it.first;
}else{
nums[i++] = it.first;
nums[i++] = it.first;
}
}
return i;
}
};
```