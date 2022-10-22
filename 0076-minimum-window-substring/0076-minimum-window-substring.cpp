class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> static_map,change_map;
        
        for(auto it : t) static_map[it]++;
        
        int left = 0,right = 0;
        int length = INT_MAX;
        string ans = "";
        
        while(right <= s.length()) {
            
            bool flag = false;
            for(auto it : static_map) {
                if(change_map.count(it.first) > 0 and change_map[it.first] >= it.second ) {
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
            
            if(flag == true) {
                if(length > right - left) {
                    length = right-left;
                    ans = s.substr(left,right-left);
                }
                if(change_map.count(s[left]) > 0) {
                    change_map[s[left]]--;
                }
                left++;
                continue;
            }
            
            if(right < s.length() and static_map.count(s[right]) > 0) {
                change_map[s[right]]++;
            }
            
            right++;
            
        }
        
        return ans;
        
    }
};