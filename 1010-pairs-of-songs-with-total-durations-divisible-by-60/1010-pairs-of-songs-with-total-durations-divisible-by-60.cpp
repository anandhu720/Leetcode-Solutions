class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> arr(60,0);
        for(int i=0;i<time.size();i++) {
            
            int a = time[i]%60;
            
            if(a == 0) {
                count += arr[a];
            }else{
                count += arr[60-a];
            }
            
            arr[a]++;
            
        }
        
        return count;
    }
};