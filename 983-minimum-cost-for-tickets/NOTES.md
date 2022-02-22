```
class Solution {
public:
int mincostTickets(vector<int>& days, vector<int>& costs) {
vector<int> cache(365,-1);
return dfs(0,0,days,costs,cache);
}
int dfs(int day,int tillDay,vector<int> &days,vector<int> &costs,vector<int> &cache){
if(day >= days.size()){
return 0;
}
if(cache[days[day]] != -1)
return cache[days[day]];
if(tillDay >= days[day]) return dfs(day+1,tillDay,days,costs,cache);
else{ //3 options
int oneDayBook = costs[0]+dfs(day+1,days[day],days,costs,cache);
int sevenDayBook = costs[1]+dfs(day+1,days[day]+6,days,costs,cache);
int thirtyDayBook = costs[2]+dfs(day+1,days[day]+29,days,costs,cache);
// cout<<oneDayBook<<" "<<sevenDayBook<<" "<<thirtyDayBook<<endl;
return cache[days[day]] = min(oneDayBook,min(sevenDayBook,thirtyDayBook));
}
return 0;
}
};
```