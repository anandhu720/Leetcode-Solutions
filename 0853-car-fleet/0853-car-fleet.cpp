class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> nums;
        for(int i=0;i<position.size();i++) {
            nums.push_back({position[i],speed[i]});
        }
        
        sort(nums.begin(),nums.end(),greater<>());
        
        vector<double> res;
        for(auto it : nums) {
            // cout<<it.first<<endl;
            double speed = (double)(target - it.first)/it.second;
            
            res.push_back(speed);
        }
        
        int cnt = 0;
        double maxi = res[0];
        for(int i=1;i<res.size();i++) {
            
            if(res[i] > maxi) {
                cnt++;
                maxi = res[i];
            }
        }
        
        return cnt+1;
        
    }
};

/*
10

(8,4)(7,4)(6,4)(5,4)(4,4)(3,4)
1 


*/