class Solution {
private:
    bool check(string s) {
        unordered_set<char> uset;
        for(int i=0;i<s.length();i++) {
            if(uset.count(s[i]) > 0) return false;
            uset.insert(s[i]);
        }
        // cout<<s<<endl;
        return true;
    } 
public:
    int maxLength(vector<string>& arr) {
        return dfs(0,"",arr);
    }
    
    int dfs(int index,string temp,vector<string> &arr) {
        
        if(index == arr.size()) return temp.length();
        
        int select = 0,notSelect = 0;
        
        if(check(temp+arr[index])) {
            select = dfs(index+1,temp+arr[index],arr);
        }
        
        notSelect = dfs(index+1,temp,arr);
        
        return max(select,notSelect);
    }
};