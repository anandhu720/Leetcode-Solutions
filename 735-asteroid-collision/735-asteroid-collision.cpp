class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;
        st.push(nums[0]);
        vector<int> ans;
        
        for(int i=1;i<nums.size();i++) {
            bool flag = false;
            while(!st.empty() and st.top() > 0 and nums[i] < 0) {
                int prev = st.top(); st.pop();
                
                if(abs(prev) == abs(nums[i])) {
                    flag = true;
                    break;
                }else if(abs(prev) > abs(nums[i])) {
                    nums[i] = prev;
                }
            }
            
            if(!flag)
                st.push(nums[i]);
        }
        
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};