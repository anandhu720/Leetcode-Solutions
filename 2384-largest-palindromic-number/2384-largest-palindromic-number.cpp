class Solution {
public:
    string largestPalindromic(string num) {
        map<char,int,greater<char>> even,odd;
        
        for(int i=0;i<num.size();i++) {
            if(odd.count(num[i]) > 0) {
                even[num[i]] += 2;
                odd.erase(num[i]);
            }else {
                odd[num[i]] = 1;
            }
        }
        
        
        string ans = "";
        
        for(auto it : even) {
            
            if(it.first == '0' and ans.size() == 0) continue;
            
            int x = it.second/2;
            while(x--) {
                ans.push_back(it.first);
            }
            
        }
        
        bool oddUsed = false;
        for(auto it : odd) {
            ans.push_back(it.first);
            oddUsed = true;
            break;
        }
        
        string finalAns = ans;
        
        int i;
        if(oddUsed == true) i = ans.size()-2;
        else i = ans.size()-1;
        
        for(;i>=0;i--) {
            finalAns.push_back(ans[i]);
        }
        
        return finalAns.size() == 0 ? "0" : finalAns;
        
    }
};