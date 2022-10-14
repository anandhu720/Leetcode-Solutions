class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(),0);
        
        for(int i=0;i<boxes.size();i++) {
            int sum = 0;
            for(int j=0;j<boxes.size();j++) {
                if(i == j or boxes[j] == '0') continue;
                sum += abs(j - i);
            }
            
            ans[i] = sum;
        }
        
        return ans;
    }
};