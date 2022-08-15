class Solution {
public:
    int romanToInt(string s) {
        int length = s.length();
        int ans = 0;
        for(int i=length-1;i>=0;i--){
            char n = s[i];
            if(n == 'I'){
                int next = s[i+1];
                if(next == 'V' || next == 'X')
                    ans-=1;
                else
                    ans+=1;
            }
            else if(n == 'V')
                ans+=5;
            else if(n == 'X'){
                int next = s[i+1];
                if(next == 'L' || next == 'C')
                    ans-=10;
                else
                    ans+=10;
            }
            else if (n == 'L')
                ans+=50;
            else if (n == 'C'){
                int next = s[i+1];
                if(next == 'D' || next == 'M')
                    ans-=100;
                else
                    ans+=100;
            }
            else if(n == 'D')
                ans+=500;
            else if(n == 'M')
                ans+=1000;
            
        }
        return ans;
    }
};