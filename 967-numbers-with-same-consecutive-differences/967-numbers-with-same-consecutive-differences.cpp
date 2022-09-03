class Solution {
private:
    vector<int> ans;
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        int num = 0;
        for(int i=1;i<=9;i++) {
            num = num*10 + i;
            dfs(num,n-1,k);
            num /= 10;
        }
        
        return ans;
    }
    
    void dfs(int &num,int n,int k) {
        
        if(n == 0) {
            ans.push_back(num);
            return;
        }
        
        
        for(int i=0;i<10;i++) {
            if(abs(num%10-i) == k) {
                num = num*10 + i;
                dfs(num,n-1,k);
                num /= 10;
            }
        }
        
    }
};