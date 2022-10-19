class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;
        map<string,int> m;
        multimap<int,string,greater<int>> ms;
        
        for(auto it : words) m[it]++;
        for(auto it : m) ms.insert({it.second,it.first});
        
        for(auto it : ms) {
            if(k == 0) return res;
            res.push_back(it.second);
            k--;
        }
        
        return res;
    }
};