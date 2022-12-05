class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        stack<pair<int,int>> st;
        
        for(int i=0;i<nums.size();i++) {
            while(!st.empty() and nums[i] > nums[st.top().first]) {
                ans[st.top().first] = 1 + st.top().second;
                st.pop();
                if(!st.empty()) st.top().second += 1;
            }
            st.push({i,0});
        }
        
        int cnt = 0;
        while(!st.empty()) {
            ans[st.top().first] = cnt + st.top().second;
            st.pop();
            if(cnt < 1) {
                cnt++;
            }
        }
        
        return ans;
    }
};