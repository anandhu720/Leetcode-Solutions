class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        stack<int> st;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        
        vector<int> ans(nums.size(),-1);
        
        for(int i=0;i<nums.size();i++) {
            while(!pq.empty() and pq.top()[0] < nums[i]) {
                ans[pq.top()[1]] = nums[i];
                pq.pop();
            }
            while(!st.empty() and nums[st.top()] < nums[i]) {
                pq.push({nums[st.top()],st.top()});
                st.pop();
            }
            
            st.push(i);
        }
        return ans;
        
    }
};