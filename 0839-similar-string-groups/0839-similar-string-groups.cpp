class DisjointSet {
private:
    vector<int> parent,size;
public:
    DisjointSet(int n) {
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) parent.push_back(i);
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionBySize(int ul,int vl) {
        int u = findUPar(ul);
        int v = findUPar(vl);
        
        if(u == v) return;
        
        if(size[u] > size[v]) {
            size[u] += size[v];
            parent[v] = u;
        }else{
            size[v] += size[u];
            parent[u] = v;
        }
    }
    
    int getComponents() {
        int cnt = 0;
        
        for(int i=0;i<parent.size();i++) {
            if(findUPar(i) == i) cnt++;
        }
        
        return cnt;
    }
};
// tars rats
class Solution {
private:
    bool ok(string &s,string &t) {
        if(s.size() != t.size()) return false;
        int cnt = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i] != t[i]) cnt++;
        }
        
        if(cnt == 0) return true;
        if(cnt != 2) return false;
        
        pair<char,char> sp = {'X','X'};
        pair<char,char> tp = {'X','X'};
        
        cnt = 0;
        for(int i=0;i<s.length();i++) {
            if(s[i] != t[i]) {
                if(cnt == 0) {
                    sp.first = s[i];
                    tp.first = t[i];
                }else{
                    sp.second = s[i];
                    tp.second = t[i];
                    break;
                }
                cnt++;
            }
        }
        
        return (sp.first == tp.second and tp.first == sp.second);
        
    }
public:
    int numSimilarGroups(vector<string>& strs) {
        DisjointSet ds(strs.size());
        
        for(int i=0;i<strs.size();i++) {
            for(int j=i+1;j<strs.size();j++) {
                if(ds.findUPar(i) == ds.findUPar(j)) continue;
                bool check = ok(strs[i],strs[j]);
                if(check) {
                    ds.unionBySize(i,j);
                }
            }
        }
        
        return ds.getComponents()-1;
    }
};