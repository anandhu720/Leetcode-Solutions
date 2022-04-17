class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" or num2 == "0") return "0";
        
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        vector<int> num(num1.length() + num2.length() , 0);
        
        for(int i=0;i<num1.length();i++) {
            for(int j=0;j<num2.length();j++) {
                int digit = (int)(num1[i] - 48) * (int)(num2[j] - 48);
                
                num[i+j] += digit;
                num[i+j+1] += num[i+j] / 10;
                num[i+j] = num[i+j] % 10;
            }
        }
        
        reverse(num.begin(),num.end());
        
        int i = 0;
        while(i < num.size() and num[i] == 0) i++;
        
        string ans;
        for(;i<num.size();i++) ans += to_string(num[i]);
        
        
        return ans;
    }
};