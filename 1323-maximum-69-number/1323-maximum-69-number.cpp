class Solution {
public:
    int maximum69Number (int num) {
        string s;
        while(num) {
            s.push_back(num%10 + '0');
            num /= 10;
        }
        
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i] == '6') {
                s[i] = '9';
                break;
            }
        }
        
        int x = 0;
        for(int i=s.length()-1;i>=0;i--) {
            x = x*10 + (s[i] - '0');
        }
        
        return x;

    }
};