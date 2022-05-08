class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int> q;
        for(auto it : nums) q.push(it);
        
        int i = q.top(); q.pop();
        int gap = 0;
        while(!q.empty()) {
            int temp = i - q.top();
            gap = max(gap,temp);
            
            i = q.top(); q.pop();
        }
        
        return gap;
    }
};