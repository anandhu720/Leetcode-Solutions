class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        unordered_map<string,vector<int>> umap;
        return dfs(s,umap);
        
    }
    
    vector<int> dfs(string s,unordered_map<string,vector<int>> &umap) {
        vector<int> ans;
        
        if(umap.find(s) != umap.end()) return umap[s];
        
        for(int i=0;i<s.length();i++) {
            
            if(s[i] == '-' or s[i] == '+' or s[i] == '*') {
                
                vector<int> left = dfs(s.substr(0,i),umap);
                vector<int> right = dfs(s.substr(i+1),umap);
                
                for(int x : left) {
                    for(int y : right) {
                        
                        switch(s[i]) {
                            case '-':
                                ans.push_back(x - y);
                                break;
                            case '+':
                                ans.push_back(x + y);
                                break;
                            case '*':
                                ans.push_back(x * y);
                                break;
                        }
                        
                    }
                }
                
            }
            
        }
        
        if(ans.size() == 0) {
            ans.push_back(stoi(s));
        }
        
        umap[s] = ans;
        return ans;
    }
};