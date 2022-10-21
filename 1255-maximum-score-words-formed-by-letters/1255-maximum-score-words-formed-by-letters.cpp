class Solution {
public:
    bool valid(string &s,unordered_map<char,int> umap) {
        
        for(auto it : s) {
            if(umap[it] == 0) return false;
            umap[it]--;
        }
        
        return true;
    }
    int getSum(string &s,unordered_map<char,int> &umap,vector<int> &score) {
        int sum = 0;
        for(auto it : s) {
            sum += score[it-'a'];
            umap[it]--;
        }
        
        return sum;
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int> umap;
        
        for(auto it : letters) {
            umap[it]++;
        }
        
        return dfs(0,words,umap,score);
    }
    
    int dfs(int i,vector<string> &words,unordered_map<char,int> &umap,vector<int> &score) {
        
        if(i == words.size())
            return 0;
        
        int take = 0,nottake = 0;
        if(valid(words[i],umap)) {
            int sum = getSum(words[i],umap,score);
            take = sum + dfs(i+1,words,umap,score);
            for(auto it : words[i]) umap[it]++;
        }
        
        nottake = dfs(i+1,words,umap,score);
        
        return max(take,nottake);
    }
};