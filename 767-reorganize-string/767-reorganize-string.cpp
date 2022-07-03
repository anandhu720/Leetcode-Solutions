class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> umap;
        for(auto it : s) umap[it]++;
        priority_queue<pair<int,char>> pq;
        
        string ans = "";
        
        for(auto it : umap) pq.push({it.second,it.first});
        
        pair<int,char> prev = {0,'X'};
        
        while(!pq.empty()) {
            auto curr = pq.top(); pq.pop();
            
            ans.push_back(curr.second);
            
            curr.first = curr.first-1;
            
            if(prev.first != 0) {
                pq.push(prev);
            }
            
            prev = curr;
            
        }
        
        return ans.length() == s.length() ? ans : "";
    }
};