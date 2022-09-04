class Solution {
public:
    long long mostBooked(int n, vector<vector<int>>& nums) {
        priority_queue<pair<long long,pair<long long,long long>>,vector<pair<long long,pair<long long,long long>>>,greater<pair<long long,pair<long long,long long>>>> pq; // time,{room,no}
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> freeRooms; // room,no.of.meeting done
        
        for(int y=0;y<n;y++) freeRooms.push({y,0});
        
        sort(nums.begin(),nums.end());
        
        int i=0;
        while(i < nums.size()) {
            
            while(!pq.empty() and pq.top().first <= nums[i][0]) {
                freeRooms.push(pq.top().second);
                pq.pop();
            }
            
            if(!freeRooms.empty()) {
                auto x = freeRooms.top(); freeRooms.pop();
                // cout<<"Rooms :" <<x.first<<" "<<i<<endl;
                x.second++;
                pq.push({nums[i][1],x});
            }else{
                auto x = pq.top(); pq.pop();
                long long diff = x.first - nums[i][0];
                pq.push({nums[i][1]+diff,{x.second.first,x.second.second+1}});
            }
            
            i++;
        }
        
        
        while(!pq.empty()) {
            freeRooms.push(pq.top().second);
            pq.pop();
        }
        
        long long maxi = 0;
        long long room = 0;
        
        while(!freeRooms.empty()) {
            auto it  = freeRooms.top(); freeRooms.pop();
            // cout<<it.first<<" "<<it.second<<endl;
            if(maxi < it.second) {
                maxi = it.second;
                room = it.first;
            }
        }
        
        return room;
        
        
    }
};
