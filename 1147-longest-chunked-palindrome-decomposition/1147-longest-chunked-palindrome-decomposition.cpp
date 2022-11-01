class Solution {
public:
    int longestDecomposition(string text) {
        string s1,s2;
        
        int left = 0,right = text.size()-1;
        int cuts = 0;
        while(left < right) {
            s1.push_back(text[left]);
            s2.push_back(text[right]);
            
            string tmp = s2;
            reverse(tmp.begin(),tmp.end());
            if(s1 == tmp) {
                if(left+1 == right) cuts++;
                else cuts += 2;
                s1 = "";
                s2 = "";
            }
            
            left++;
            right--;
        }
        
        
        return cuts+1;
    }
};

