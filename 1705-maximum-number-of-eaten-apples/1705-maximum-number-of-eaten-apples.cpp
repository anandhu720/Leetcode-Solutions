class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        int noOfApples = 0;
        
        int i=0;
        
        while(i < days.size() or !pq.empty()) {
            //insert todays apple
            if(i < days.size() and apples[i] > 0) pq.push({days[i] + i - 1,apples[i]});
            
            //delete expired apple
            while(!pq.empty() and pq.top().first < i) pq.pop();
            
            //get the apple of today
            if(!pq.empty()) {
                auto p = pq.top(); pq.pop();
                if(p.second > 1) pq.push({p.first,p.second-1});
                noOfApples++;
            }
            
            i++;
        }
        
        return noOfApples;
    
    }
};