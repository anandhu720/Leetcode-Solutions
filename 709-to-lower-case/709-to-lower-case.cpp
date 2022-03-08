class Solution {
public:
    string toLowerCase(string s) {
        string ns="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                ns+=s[i]+32;
            }
            else
            {
		        ns+=s[i];
            }
        }
        return ns;
    }
};