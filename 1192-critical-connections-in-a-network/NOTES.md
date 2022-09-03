}
​
} else if (c != parent[node]) {
low[node] = min(low[node], disc[c]);
}
}
}
public:
// Articulations points finding using Tarjans Algo
vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
for(auto it : connections) {
adj[it[0]].push_back(it[1]);
adj[it[1]].push_back(it[0]);
}
vector<int> disc(n,-1),low(n,-1),parent(n,-1);
vector<vector<int>> ap;
for(int i=0;i<n;i++) {
if(disc[i] == -1) {
DFS(i,disc,low,parent,ap);
}
}
return ap;
}
};
```