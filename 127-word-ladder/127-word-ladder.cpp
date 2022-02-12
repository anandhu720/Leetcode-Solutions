class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        bool isPresent = false;
        unordered_set<string> myset;
        for(auto i : wordList){
            if(i == endWord) isPresent = true;
            myset.insert(i);
        }
        
        if(!isPresent) return 0;
        
        queue<string> q;
        q.push(beginWord);
        int depth = 0;
        while(!q.empty()){
            depth += 1;
            int size = q.size();
            while(size--){
                auto curr = q.front(); q.pop();
                
                for(int i=0;i<curr.length();i++){  //checking all combinations
                    auto temp = curr;
                    for(char c='a';c<='z';c++){
                        temp[i] = c;
                        if(curr.compare(temp) == 0)  //if same string need to skip it
                            continue;
                        if(temp.compare(endWord) == 0)  //find our answer
                            return depth+1;
                        if(myset.find(temp) != myset.end()){
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};