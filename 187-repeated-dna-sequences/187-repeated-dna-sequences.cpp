class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string, int> mp;
        
        string temp = "";
        int i=0;
        
        for(; i<10 && i<s.size(); i++)
        {
            temp += s[i];
        }
        
        mp[temp]++;
        while(i < s.size())
        {
            temp.erase(temp.begin());
            temp += s[i];
            
            if(mp[temp] == 1) ans.push_back(temp);
            
            mp[temp]++;
            i++;
        }
        
        return ans;
 
    }
};