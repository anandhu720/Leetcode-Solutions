class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        
        vector<int> evenN,evenT,oddN,oddT;
        
        for(auto it : nums) {
            if(it%2 == 0) evenN.push_back(it);
            else oddN.push_back(it);
        }
        
        for(auto it : target) {
            if(it%2 == 0) evenT.push_back(it);
            else oddT.push_back(it);
        }
        
        long long res = 0;
        for(int i=0;i<evenN.size();i++) {
            res += 1LL * abs(evenN[i] - evenT[i])/2;
        }
        
        for(int i=0;i<oddN.size();i++) {
            res += 1LL * abs(oddN[i] - oddT[i])/2;
        }
        
        return res/2;
        
        
    }
};