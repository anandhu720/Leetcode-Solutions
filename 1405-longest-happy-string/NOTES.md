class Solution {
public:
string longestDiverseString(int a, int b, int c) {
priority_queue<pair<int,char>> pq;
if(a)
pq.push({a,'a'});
if(b)
pq.push({b,'b'});
if(c)
pq.push({c,'c'});
string s = "";
pair<int,char> prev = {0,'X'};
char last = 'X';
int time = 0;
while(!pq.empty()) {
auto curr = pq.top(); pq.pop();
if(last != curr.second) time = 0;
curr.first = curr.first - 1;
s.push_back(curr.second);
time += 1;
if(prev.first != 0) {
pq.push(prev);
prev = {0,'X'};
}
if(time < 2 and curr.first != 0) {
pq.push(curr);
}else if(time == 2) prev = curr;
last = curr.second;
}
return s;
}
};