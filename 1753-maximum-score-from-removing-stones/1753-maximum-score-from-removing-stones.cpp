class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int res = 0;
        
        while(pq.size() > 1) {
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();
            
            res++;
            
            if(first - 1 > 0) pq.push(first-1);
            if(second-1 > 0) pq.push(second-1);
        }
        
        return res;
    }
};