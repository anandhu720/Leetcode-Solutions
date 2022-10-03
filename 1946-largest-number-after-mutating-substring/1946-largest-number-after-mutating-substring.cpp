class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int left = 0;
        for(int i=0;i<num.size();i++) {
            if(change[num[i] - '0'] <= num[i] - '0') left++;
            else break;
        }
        while(left < num.size() and change[num[left] - '0'] >= num[left] - '0') {
            num[left] = change[num[left] - '0'] + '0';
            left++;
        }
        
        return num;
    }
};