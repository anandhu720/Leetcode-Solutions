class Solution {
public:
    int minDeletions(string s) {
        sort(s.begin(),s.end());
        
        s.push_back('X');
        
        unordered_set<int> uset;
        int ans = 0;
        
        char prev = s[0];
        int freq = 1;
        for(int i=1;i<s.length();i++) {
            if(s[i] == prev) freq++;
            else {
                while(freq != 0 and uset.count(freq) > 0) {
                    ans++;
                    freq--;
                }

                uset.insert(freq);
                
                prev = s[i];
                freq = 1;
                
            }
        }
                
        return ans;
    }
};