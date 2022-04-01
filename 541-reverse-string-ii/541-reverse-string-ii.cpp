class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.size();
        int j = min(n-1, k-1);
        
        int a = 0;
        
        
        while(a < n){
            a = j+k;
            while(i < j){
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
                i++;
                j--;
            }
            i = a+1;
            j = min(n-1, a+k);
            a++;
        }
        return s;
    }
};