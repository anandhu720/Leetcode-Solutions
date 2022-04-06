class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mod = 1000000007;
        long result = 0;
        for(int i=0;i<arr.size();i++) {
            int count[101] = {0};
            for(int j=i+1;j<arr.size();j++) {
                int temp = target - arr[i] - arr[j];
                if(temp >= 0 and temp <= 100 and count[temp] > 0) {
                    result += count[temp];
                    result %= mod;
                }
                count[arr[j]]++;
            }
        }
        return (int)result;
    }
};

