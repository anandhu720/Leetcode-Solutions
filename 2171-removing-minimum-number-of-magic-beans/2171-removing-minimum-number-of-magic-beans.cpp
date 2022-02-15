class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        vector<long long> leftPrefix,rightPrefix(beans.size(),0),ans(beans.size(),0);
        
        long long sum = 0;
        for(auto it : beans){
            sum += it;
            leftPrefix.push_back(sum);
        }
        sum = 0;
        for(int i=beans.size()-1;i>=0;i--){
            sum += beans[i];
            rightPrefix[i] = sum;
        }
        
        for(int i=0;i<beans.size();i++){
            ans[i] = leftPrefix[i] +rightPrefix[i] + beans[i]*(i-1-beans.size());
        }
        
        long long minAnswer = LONG_LONG_MAX;
        for(auto i : ans)
            minAnswer = min(minAnswer,i);
        
        return minAnswer;
            
    }
};