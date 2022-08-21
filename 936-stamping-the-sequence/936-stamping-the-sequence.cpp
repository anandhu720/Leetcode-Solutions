class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        
        vector<int> visited(target.size(),0);
        vector<int> ans;
        int count = 0;
        
        while(count != target.size()) { // ? count != target char count
            
            bool anyChange = false;
            for(int i=0;i<=target.size() - stamp.size();i++) {
                
                if(visited[i] != 1 and check(target,i,stamp)) {
                    replace(target,i,stamp,count); // replace to ?
                    anyChange = true;
                    visited[i] = 1; // marking visited index
                    ans.push_back(i); // adding left index to array
                    
                    if(count == target.size()) break;
                }
                
            }
            
            if(!anyChange) return {}; // if there is no seq to change
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    bool check(string target,int pos,string stamp) {
        for(int i=0;i<stamp.size();i++) {
            if(target[pos+i] != '?' and target[pos+i] != stamp[i])
                return false;
        }
        
        return true;
        
    }
    
    void replace(string &target,int pos,string stamp,int &count) {
        
        for(int i=0;i<stamp.size();i++) {
            if(target[i+pos] == '?') continue;
            count++;
            target[i+pos] = '?';
        }
        
    }
};