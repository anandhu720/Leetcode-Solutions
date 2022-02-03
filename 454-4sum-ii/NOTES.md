### Time = O(n*n*n)
​
```
class Solution {
public:
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
int n = nums1.size();
unordered_map<int,int> map;
int count = 0;
for(int i=0;i<n;i++) map[nums4[i]]++;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
int temp = -(nums1[i]+nums2[j]+nums3[k]);
// cout<<temp<<endl;
if(map.find(temp) != map.end()){
// cout<<i<<" "<<j<<" "<<k<<endl;
count += map[temp];
}
}
}
}
return count;
}
};
```
​