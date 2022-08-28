class Solution {
private:
    vector<string> ans;
    unordered_map<string,bool> umap;
    // T.C. : O(n) S.C. : O(n)
    int check(string &s) {
        stack<char> st;
        int ans = 0;
        for(int i=0;i<s.length();i++) {
            
            if(!st.empty() and s[i] == ')') {
                while(!st.empty() and st.top() >= 'a' and st.top() <= 'z') st.pop();
                if(!st.empty() and st.top() == '(') {
                    st.pop();
                    continue;
                }
            }
            
            if(s[i] == ')') ans++;
            else if(s[i] == '(' or (s[i] >= 'a' and s[i] <= 'z')) st.push(s[i]);
            
        }
        
        while(!st.empty()) {
            if(st.top() == '(' or st.top() == ')') ans++;
            st.pop();
        }
        
        return ans;
    }
    
    void dfs(string s,int mini) {
        
        if(umap.find(s) != umap.end()) return;
        else umap[s] = true;

        
        
        if(mini == 0) {
            int flag = check(s);
            if(flag == 0) {
                ans.push_back(s);
            }
            return;
        }
        
        for(int i=0;i<s.length();i++) {
            if(s[i] != '(' and s[i] != ')') continue;
            
            dfs(s.substr(0,i)+s.substr(i+1),mini-1);
        }
        
    }
    
public:
    vector<string> removeInvalidParentheses(string s) {
        int mini = check(s);
        
        dfs(s,mini);

        return ans;
    }
};