class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq; // max heap
        long long sum = 0;
        
        for(auto ele : target) {
            pq.push(ele);
            sum += ele;
        }
        
        while(true) {
            long long top = pq.top(); pq.pop();
            sum = sum - top;
            if(top == 1 or sum == 1) return true;
            if(sum <= 0 || sum >= top || top%sum == 0) return false;
            top = top%sum;
            pq.push(top);
            sum = sum + top;
        }
        
        return true;
    }
};