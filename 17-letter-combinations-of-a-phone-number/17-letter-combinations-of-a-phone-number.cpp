class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) return {};
        vector<string> letterCom = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result;
        dfs(result,digits,"",0,letterCom);
        return result;
    }
    void dfs(vector<string> &result,string &digits,string curr,int index,vector<string> &comb){
        if(index == digits.length()){
            result.push_back(curr);
            return;
        }
        
        string letter = comb[(int)digits[index] - 48];
        for(int i=0;i<letter.length();i++){
            dfs(result,digits,curr+letter[i],index+1,comb);
        }
    }
};