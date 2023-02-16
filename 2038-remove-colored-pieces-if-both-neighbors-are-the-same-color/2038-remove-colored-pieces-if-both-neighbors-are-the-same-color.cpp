class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA = 0,countB = 0;
        
        for(int i=1;i<colors.size()-1;i++) {
            if(colors[i] == colors[i-1] and colors[i+1] == colors[i]) {
                if(colors[i] == 'A') countA++;
                else countB++;
            }
        }
        
        if(countA > countB) return true;
        return false;
    }
};