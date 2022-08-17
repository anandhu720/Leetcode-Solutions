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
        
        stack<vector<int>> s;
        
        s.push(nums[0]);
        
        int currCap = nums[0][2];
        if(currCap > capacity) return false;
        for(int i=1;i<nums.size();i++) {
            while(!s.empty() and nums[i][0] >= s.top()[1]) {
                vector<int> x = s.top();
                s.pop();
                currCap -= x[2];
            }
            
            currCap += nums[i][2];
            vector<vector<int>> f;
            while(!s.empty() and nums[i][1] > s.top()[1]) {
                auto x = s.top();
                f.push_back(x);
                s.pop();
            }
            
            if(f.size() > 0) {
                s.push(nums[i]);
                for(int i = f.size()-1;i>=0;i--) s.push(f[i]);
            }else{
                s.push(nums[i]);
            }
            
            if(currCap > capacity) return false;
        }
        
        return true;
        
    }
};


/*

 [[1,5,2],[3,3,7]]

*/