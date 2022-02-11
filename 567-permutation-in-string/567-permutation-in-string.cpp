class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> umap,temp;
        for(auto i : s1) umap[i]++;
        int i=0,j=0;
        while(j < s2.length()){
            temp[s2[j]]++;
            if(j-i+1 == s1.length()){
                if(umap == temp) return true;
                temp[s2[i]]--;
                if(temp[s2[i]] == 0) temp.erase(s2[i]);
                i++;
            }
            j++;
        }
        
        return false;
    }
};