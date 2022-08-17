class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<vector<int>> nums;
        
        for(auto it : trips) {
            vector<int> tmp;
            tmp.push_back(it[1]);
            tmp.push_back(it[2]);
            tmp.push_back(it[0]);
            nums.push_back(tmp);
        }
        
        sort(nums.begin(),nums.end());
        
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int currCap = 0;
        
        for(int i=0;i<nums.size();i++) {
            while(pq.size() > 0 and nums[i][0] >= pq.top().first) {
                currCap -= pq.top().second;
                pq.pop();
            }
            
            currCap += nums[i][2];
            pq.push({nums[i][1],nums[i][2]});
            
            
            if(currCap > capacity) return false;
        }
        
        return true;
        
    }
};


/*

 [[1,5,2],[3,3,7]]
 
 {end,start,value}

*/