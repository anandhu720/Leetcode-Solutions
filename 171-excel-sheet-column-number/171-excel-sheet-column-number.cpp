class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char,int> hash;
        int x = 1;
        for(char c='A';c<='Z';c++) hash[c] = x++;
        
        string str = columnTitle;
        x = 0;
        int ans = 0;
        
        for(int i=str.length()-1;i>=0;i--){
            ans = ans + (pow(26,x) * hash[str[i]]);
            x++;
        }
         
        return ans;
    }
};