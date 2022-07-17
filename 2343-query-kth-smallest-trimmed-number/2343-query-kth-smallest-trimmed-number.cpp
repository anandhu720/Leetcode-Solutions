class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& qu) {
        vector<int> ans; 
        
        cout<<nums[0]<<" "<<nums[0].size()<<endl;
        
        for(int i=0;i<qu.size();i++) {
            priority_queue<pair<string,int>,vector<pair<string,int>>,greater<pair<string,int>>> pq;
            
            for(int j=0;j<nums.size();j++) {
                int x = nums[j].size() - qu[i][1];
                string temp = nums[j].substr(x);
                pq.push({temp,j});
            }
            
            int k = qu[i][0];
            
            while(k > 1) {
                pq.pop();
                k--;
            }
            ans.push_back(pq.top().second);
        }
        
        return ans;
    }
};