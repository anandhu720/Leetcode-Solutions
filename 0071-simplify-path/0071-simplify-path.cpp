class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        st.push("/");
        
        if(path[path.size()-1] != '/') path.push_back('/');
        
        string dir;
        for(int i=1;i<path.size();i++) {
            if(path[i] == '/') {
                // cout<<dir<<endl;
                if(dir == "" or dir == ".") {
                    dir = "";
                    continue;
                }
                
                if(dir == "..") {
                    if(st.size() > 1) st.pop();
                }else{
                    st.push(dir);
                }
                
                dir = "";
                 
                
           } else   dir.push_back(path[i]);
        }
        
        vector<string> tmp;
        while(!st.empty()) {
            tmp.push_back(st.top());
            st.pop();
        }
        
        string ans;
        for(int i=tmp.size()-1;i>=0;i--) {
            ans += tmp[i];
            if(i != tmp.size()-1)
                ans.push_back('/');
        }
        
        if(ans.size() > 1) ans.pop_back();
        
        return ans;
    }
};

/*
"/a//b////c/d//././/.."
*/