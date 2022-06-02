while(!q.empty()) {
height++;
int size = q.size();
for(int i=0;i<size;i++) {
int curr = q.front(); q.pop();
for(auto k : adj[curr]){
if(vis[k] == false) {
q.push(k);
vis[k] = true;
}
}
}
}
if(h > height) {
res.clear();
h = height;
}
if(h == height) res.push_back(node);
}
};
```