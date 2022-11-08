class Solution {
private:
    int dfs(string answer,int k,char ch) {
        int left = 0;
        int right = 0;
        int x = k;
        
        int res = 0;
        
        while(right < answer.size()) {
            if(answer[right] == ch and x == 0) {
                while(x == 0 and left <= right) {
                    if(answer[left] == ch) x++;
                    left++;
                }
            }
            if(x > 0 and answer[right] == ch) x--;
            
            res = max(res,right - left + 1);
            right++;
        }
        
        return res;
    }
public:
    int maxConsecutiveAnswers(string answer, int k) {
        return max(dfs(answer,k,'F'),dfs(answer,k,'T'));
    }
};