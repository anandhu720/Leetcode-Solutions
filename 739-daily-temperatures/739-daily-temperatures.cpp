class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(),0);
        
        stack<pair<int,int>> st;  // { value -> index }
        
        for(int i=0;i<temp.size();i++) {
            
            int currTemp = temp[i];
            
            while(!st.empty() and st.top().first < currTemp) {
                auto x = st.top(); st.pop();
                
                ans[x.second] = i - x.second;
            }
            
            st.push({currTemp,i});
            
        }
        
        
        return ans;
        
    }
};