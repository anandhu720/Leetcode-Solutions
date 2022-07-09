class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;
        
        for(auto it : piles) {
            sum += it;
            pq.push(it);
        }
        
        while(k) {
            int curr = pq.top(); pq.pop();
                        
            sum -= curr;
            
            curr -= floor(curr/2);
            
            pq.push(curr);
            
            sum += curr;
            
            k--;
        }
        
        return sum;
        
    }
};