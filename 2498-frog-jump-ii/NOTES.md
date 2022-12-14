if(j >= prev) return false;
prev = j;
vis.insert(j);
i++;
}
if(i >= 0) return false;
return true;
}
int maxJump(vector<int>& nums) {
int left = 0,right = nums[nums.size()-1] - nums[0];
int res = right;
while(left <= right) {
int mid = left + (right - left)/2;
// cout<<mid<<endl;
if(dfs(mid,nums)) {
res = mid;
right = mid - 1;
}else{
left = mid + 1;
}
}
return res;
}
};
​
```