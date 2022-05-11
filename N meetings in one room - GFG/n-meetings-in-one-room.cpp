// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>> intervals;
        for(int i=0;i<n;i++) {
            intervals.push_back({start[i],end[i]});
        }
        
        sort(intervals.begin(),intervals.end());
        
        int prevEnd = intervals[0][1];
        int ans = 0;
        int i = 1;
        while(i < intervals.size()) {
            if(intervals[i][0] <= prevEnd) {
                ans++;
                prevEnd = min(prevEnd,intervals[i][1]);
            }else{
                prevEnd = intervals[i][1];
            }
            i++;
        }
        
        int finalAns = intervals.size() - ans;
        return finalAns;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends