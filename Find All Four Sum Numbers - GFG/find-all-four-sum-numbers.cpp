// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
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

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends