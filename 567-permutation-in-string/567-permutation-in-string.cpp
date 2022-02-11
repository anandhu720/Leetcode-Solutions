class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> umap;
        for(auto i : s1) umap[i]++;
        int i=0,j=0;
        while(j < s2.length()){
            
            if(j-i+1 == s1.length()){
                int k = i;
                unordered_map<int,int> temp;
                while(k<=j){
                    temp[s2[k]]++;
                    k++;
                }
                if(umap == temp) return true;
                i++;
            }
            j++;
        }
        
        return false;
    }
};