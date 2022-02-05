class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end()); //sort the vector
        if(strs.size()==0) return "";
        string first=strs[0]; //take first and last string from the vector as they will be the most different ones
        string last=strs[strs.size()-1];
        int c=0;
        while(c<first.size())
        {
            if(first[c]==last[c])
                c++;
            else
                break;
        }
        string ans=first.substr(0,c);
        return ans;
    }
};