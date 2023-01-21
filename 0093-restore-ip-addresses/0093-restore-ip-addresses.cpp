class Solution {
public:
    vector<string> ans;
    vector<string> restoreIpAddresses(string s) {
        string curr;
        dfs(0,0,s,curr);
        return ans;
    }
    
    void dfs(int index,int dots,string s,string curr) {
        
        while(index < s.length() and s[index] == '0') {
            curr += "0.";
            index++;
            dots++;
        }
        
        if(index == s.length() and dots == 4) {
            curr.pop_back();
            ans.push_back(curr);
            return;
        }
        
        if(dots >= 4) return;
        
        

        for(int i=index;i<s.length() and i < index+3;i++) {
            if(stoi(s.substr(index, i-index+1)) <= 255) {
                dfs(i+1,dots+1,s,curr+s.substr(index,i-index+1)+'.');
            }else break;
        }
    }
};