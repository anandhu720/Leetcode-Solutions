class Solution {
public:
    int minPartitions(string n) {
        char temp = '0';
        for(auto it : n) {
            if(it > temp) temp = it;
        }
        
        return temp - '0';
    }
};