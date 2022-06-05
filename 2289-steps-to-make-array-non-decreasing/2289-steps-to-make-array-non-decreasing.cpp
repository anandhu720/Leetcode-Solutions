class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>> st;
        st.push({nums[nums.size()-1],0});
        int ans = 0;
        
        for(int i=nums.size()-2;i>=0;i--) {
            int count = 0;
            while(!st.empty() and nums[i] > st.top().first) {
                count = max(count+1,st.top().second);
                st.pop();
            }
            ans = max(ans,count);
            st.push({nums[i],count});
        }
        
        return ans;
    }
};