class Solution {
public:
    int minDeletions(string s) {
        int cnt[26] = {}, res = 0;
        unordered_set<int> uset;
        for (char ch : s)
            ++cnt[ch - 'a'];

        for (int i = 0; i < 26; ++i) {
            if(uset.find(cnt[i]) != uset.end()) {
                while(cnt[i] != 0 and uset.find(cnt[i]) != uset.end()) {
                    res++;
                    cnt[i]--;
                }
            }
            uset.insert(cnt[i]);

        }
        
        return res;
    }
};

