class Solution {
public:
    int titleToNumber(string str) {
        int x = 0;
        int ans = 0;
        
        for(int i=str.length()-1;i>=0;i--){
            int ascii = (int)str[i];
            int value = ascii - 64;
            cout<<value<<endl;
            ans = ans + (pow(26,x) * value);
            x++;
        }
         
        return ans;
    }
};
