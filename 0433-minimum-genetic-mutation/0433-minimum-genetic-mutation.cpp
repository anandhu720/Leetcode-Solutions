class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> uset(bank.begin(),bank.end());
        vector<char> n = {'A','C','G','T'};
        
        if(uset.count(end) == 0) return -1;
        
        queue<pair<string,int>> q;
        q.push({start,0});
        
        while(!q.empty()) {
            string curr = q.front().first; 
            int step = q.front().second;
            q.pop();
            
            if(curr == end) return step;
            
            for(int i=0;i<curr.size();i++) {
                string tmp = curr;
                for(auto it : n) {
                    if(tmp[i] == it) continue;
                    tmp[i] = it;
                    if(uset.count(tmp) > 0) {
                        uset.erase(tmp);
                        q.push({tmp,step+1});
                    }
                }
            }
        }
        
        return -1;
    }
};

