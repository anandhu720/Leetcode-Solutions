class Solution {
public:
    //Brute force
    string pushDominoes(string dom) {
        int n = dom.size();
        int firstIndex = -1,secondIndex = -1;
        char firstChar = '0',secondChar = '0';
        for(int i=0;i<n;i++) {
            if(dom[i] == '.') continue;
            
            if(firstChar == '0') {
                firstChar = dom[i];
                firstIndex = i;
            }else if(secondChar == '0'){
                secondChar = dom[i];
                secondIndex = i;
            }
            
            if(firstChar != '0' and secondChar != '0'){

                if(firstChar == 'R' and secondChar == 'L') {
                    int left = firstIndex+1;
                    int right = secondIndex-1;
                    
                    while(left < right) {
                        dom[left] = 'R';
                        dom[right] = 'L';
                        left++;
                        right--;
                    }
                }else if(firstChar == secondChar) {
                    char x = firstChar;
                    for(int j = firstIndex+1;j<secondIndex;j++) dom[j] = x;
                }
                
                firstIndex = secondIndex;
                firstChar = secondChar;
                secondChar = '0';
            }
        }
        
        for(int i=0;i<n;i++) {
            if(dom[i] != '.') {
                if(dom[i] == 'R') break;
                int left = i-1;
                while(left >= 0) dom[left--] = 'L';
                break;
            }
        }
        
        for(int i=n-1;i>=0;i--) {
            if(dom[i] != '.') {
                if(dom[i] == 'L') break;
                int right = i+1;
                while(right < n) dom[right++] = 'R';
                break;
            }
        }
        return dom;
    }
};