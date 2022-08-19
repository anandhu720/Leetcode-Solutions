class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> uset = {'a','e','i','o','u'};
        
        int left = 0;
        int right = 0;
        int currNo = 0;
        int finalNo = 0;
        
        for(;right<k;right++) {
            if(uset.count(s[right]) > 0) {
                currNo += 1;
            }
        }
        
        right -= 1;
        
        while(right < s.length()) {
            finalNo = max(finalNo,currNo);
            if(uset.count(s[left]) > 0) {
                currNo -= 1;
            }
            left++;
            right++;
            if(uset.count(s[right]) > 0) {
                currNo += 1;
            }
        }
        
        return finalNo;
    }
};