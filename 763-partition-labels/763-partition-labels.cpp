// class Solution {
// public:
//     vector<int> partitionLabels(string s) {
//         vector<int> ans;
//         vector<int> lastIndex(26);
        
//         for(int i=0;i<s.length();i++) {
//             lastIndex[s[i] - 'a'] = i;
//         }
        
        
//         int i=0;
//         while(i < s.length()) {
//             int end = lastIndex[s[i] - 'a'];
//             int j = i+1;
//             while(j != end) {
//                 end = max(end,lastIndex[s[j] - 'a']);
//                 j++;
//             }
            
//             ans.push_back(j - i + 1);
//             i = j+1;
//         }
        
//         return ans;
        
//     }
// };

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        // filling impact of character's
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        // making of result
        vector<int> res;
        int prev = -1;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i){
                // partition time
                res.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return res;
    }
};