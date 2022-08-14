class Solution {
public:
    long long ans = 9e9;
    string smallestNumber(string pattern) {
        
        long long num = 0;
        long long prev = 0;
        vector<bool> map(10,false);
        
        
        for(int i=1;i<10;i++) {
            num = i;
            prev = i;
            map[i] = true;
            dfs(0,pattern,num,prev,map);
            map[i] = false;
        }
        
        
        return to_string(ans);
    }
    
    void dfs(int index,string &p,long long &num,long long prev,vector<bool> &map) {
        
        if(index == p.size()) {
            if(num < ans) ans = num;
            return;
        }
                
        
        if(p[index] == 'I') {
            for(int i=prev+1;i<=9;i++) {
                if(map[i] == true) continue;
                num = num*10 + i;
                map[i] = true;
                dfs(index+1,p,num,num%10,map);
                map[num%10] = false;
                num /= 10;
            }
        }else if(p[index] == 'D'){
            for(int i=prev-1;i>=1;i--) {
                if(map[i] == true) continue;
                num = num*10 + i;
                map[i] = true;
                dfs(index+1,p,num,num%10,map);
                map[num%10] = false;
                num /= 10;
            }
        }
        
    }
    
};


