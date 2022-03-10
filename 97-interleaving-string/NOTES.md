```
class Solution {
public:
bool isInterleave(string s1, string s2, string s3) {
return dfs(0,0,s1,s2,false,"",s3);
}
bool dfs(int i,int j,string &s1,string &s2,bool flag,string comb,string &s3) {
if(comb.length() == s3.length()){
if(comb == s3) return true;
return false;
}
if(flag == true){ //need to use s1
flag = false;
for(int x=i;x<=s1.length();x++){
string sub = s1.substr(i,x);
// cout<<comb+sub<<endl;
dfs(x,j,s1,s2,flag,comb+sub,s3);
}
}
else { //need to use s2
flag = true;
for(int x=j;x<=s2.length();x++){
string sub = s2.substr(j,x);
// cout<<comb+sub<<endl;
dfs(i,x,s1,s2,flag,comb+sub,s3);
}
}
return false;
}
};
```