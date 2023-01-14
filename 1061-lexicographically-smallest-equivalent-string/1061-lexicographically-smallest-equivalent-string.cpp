class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char> parent(26);
        unordered_map<char,unordered_set<char>> umap;
        char ch = 'a';
        for(int i=0;i<26;i++) {
            umap[i+'a'].insert(ch);
            parent[i] = ch++;
        }
        
        for(int i=0;i<s1.size();i++) {
            if(parent[s1[i] - 'a'] == parent[s2[i] - 'a']) {
                cout<<"EQUAL "<<parent[s1[i] - 'a']<<endl;
                continue;
            }
            if(parent[s1[i] - 'a'] < parent[s2[i] - 'a']) swap(s1[i],s2[i]);  //s1 > s2
            cout<<s1[i]<<" "<<s2[i]<<endl;
            
                for(auto it : umap[parent[s1[i] - 'a']]) cout<<it<<" ";
            cout<<endl;
            for(auto it : umap[parent[s1[i] - 'a']]) {
                parent[it - 'a'] = parent[s2[i] - 'a'];
                umap[parent[s2[i] - 'a']].insert(it);
            }
        }
        
        string s;
        for(auto it : baseStr) {
            while(parent[it-'a'] != it) {
                it = parent[it - 'a'];
            }
            s.push_back(it);
        }
        return s;
    }
};

/*

e
s

        for(int i=0;i<s1.size();i++) {
            if(s1[i] < s2[i]) swap(s1[i],s2[i]);  //s1 > s2
            for(auto it : umap[parent[s1[i] - 'a'] + 'a']) {
                parent[it - 'a'] = parent[s2[i] - 'a'];
                umap[s2[i]].insert(it);
            }
        }

nadojbodihfgmpijpfocomhcncicefpohkibjckijghii"
paeppgekfhnjnmmplmdoifdhbglmedpjgleofgnahglbe"


 a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
 a  b  b  d  e  f  g  e  i  j  k  e  m  n  N  D  q  r  s  t  u  v  w  x  y  z

n ->n,o
d ->d,p
e ->e,l,h
b ->b,c




parser
mak

*/