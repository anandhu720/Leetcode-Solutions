class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i : stones) q.push(i);
        while(1) {
            int x=0,y=0;
            if(!q.empty()) {
                x = q.top(); q.pop();
                if(!q.empty()) {
                    y = q.top();
                    q.pop();
                }else y = 0;
            }
            
            if(x == 0) return 0;
            if(y == 0) return x;
            
            if(x == y) continue;
            
            int newVal = x - y;
            q.push(newVal);
        
        }
        return -1;
    }
};