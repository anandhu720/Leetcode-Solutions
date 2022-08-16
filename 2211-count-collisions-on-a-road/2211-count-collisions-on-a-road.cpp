class Solution {
public:
    int countCollisions(string dir) {
        stack<char> st;
        st.push(dir[0]);
        
        int no = 0;
        
        for(int i=1;i<dir.size();i++) {
            while(!st.empty() and st.top() != dir[i]) {
                pair<char,int> ans = check(st.top(),dir[i]);
                dir[i] = ans.first;
                no += ans.second;
                st.pop();
            }
            
            st.push(dir[i]);
        }
        
        return no;
    }
    
    pair<char,int> check(char s,char t) {
        if(s == 'R' and t == 'L')
            return {'S',2};
        else if(s == 'R' and t == 'S')
            return {'S',1};
        else if(s == 'S' and t == 'L')
            return {'S',1};
        
        return {t,0};
    }
};