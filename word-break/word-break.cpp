class Solution {
    bool partition(string s,int pos,unordered_set<string> &myset,unordered_map<int,bool> &mem){
        if(pos==s.size())   return true;
        if(mem.count(pos))  return mem[pos];
        
        for(int i=pos;i<s.size();++i)
            if(myset.count(s.substr(pos,i-pos+1)) and partition(s,i+1,myset,mem))
                return mem[pos] = true;
        return mem[pos] = false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<int,bool> mem;
        unordered_set<string> myset;
        for(auto str: wordDict)
            myset.insert(str);
        
        return partition(s,0,myset,mem);
    }
};