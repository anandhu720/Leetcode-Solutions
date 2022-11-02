class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(k == 0) return nums[0];
        priority_queue<int> pq;
        
        int i = 0;
        while(i < nums.size() and k > 1) {
            pq.push(nums[i]);
            i++;
            k--;
        }
        
        if(i+1 < nums.size()) {
            int node = -1;
            if(!pq.empty()) node = pq.top();
            return max(nums[i+1],node);
        }
        
        if(!pq.empty()) {
            if(pq.size() == 1 and k%2 == 0) return -1;
            return pq.top();
        }
        
        return -1;
    }
};