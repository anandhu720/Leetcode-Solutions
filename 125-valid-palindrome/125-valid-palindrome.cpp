class Solution {
public:
    bool isTarget(char c){
        return ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))?true:false;
    }

    char toLower(char c){
        return (c>='A' && c<='Z')? c+32:c;
    }
    bool isPalindrome(string s) {
    
        int left=0;
        int right=s.size()-1;
        if(s.size()==0 || s.size()==1){
            return true;
        }
    
        while(left<=right){
        
            while(!isTarget(s[left]) && left<right){
                left++;
            
            }
        
            while(!isTarget(s[right]) && left<right){
                right--;
            }
            if(toLower(s[left])!=toLower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};