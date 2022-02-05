```
class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int n = nums1.size()+nums2.size();
if(n == 0) return 0;
priority_queue<int,vector<int>,greater<int>> pq;
for(auto it : nums1) pq.push(it);
for(auto it : nums2) pq.push(it);
vector<int> ans(nums1.size()+nums2.size());
int i=0;
while(!pq.empty()){
ans[i] = pq.top();pq.pop();
i++;
}
if(n%2 != 0){
return (double)ans[n/2];
}
n /= 2;
cout<<ans[n]<<" "<<ans[n-1]<<endl;
double answer = ans[n]+ans[n-1];
answer /= 2;
return answer;
}
};
```