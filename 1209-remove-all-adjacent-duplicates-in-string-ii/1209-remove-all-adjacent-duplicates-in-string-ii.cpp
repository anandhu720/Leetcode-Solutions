class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        
        for(auto ch : s) {
            if(!st.empty() and st.top().first == ch){
                st.top().second++;
            }else{
                st.push({ch,1});
            }
            
            if(st.top().second == k) st.pop();
            
        }
        
        string str;
        while(!st.empty()) {
            int n = st.top().second;
            while(n--)
                str.push_back(st.top().first);
            st.pop();
        }
        
        reverse(str.begin(),str.end());
        
        return str;
    }
};