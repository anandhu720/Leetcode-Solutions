class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        
        int left = 0,right = s2.length()-1;
        while(left <= right){
            if(s2[left] == s1[left]){
                left++;
            }
            if(s2[right] == s1[right]){
                right--;
            }
            
            if(s2[left] != s1[left] and s2[right] != s1[right]){
                swap(s2[left],s2[right]);
                return s2 == s1;
            }
        }
        
        return false;
    }
};