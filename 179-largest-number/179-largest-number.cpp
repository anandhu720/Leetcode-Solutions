class Solution {
public:
    static bool comp(string s1,string s2){
        string one=s1+s2;
        string two=s2+s1;
        if(one>two)
            return true;
        return false;
    }
    
    string largestNumber(vector<int>& nums) {
        int i;
        int n=nums.size();
        
        for( i=0;i<n;i++)
            if(nums[i]>0)
                break;
        if(i==n)
            return "0";
        
        string ans;
        vector<string>v;
        for( i=0;i<n;i++)
            v.push_back(to_string(nums[i]));
        
        sort(v.begin(),v.end(), comp);
        for( i=0;i<n;i++)
            ans+=v[i];
        
        return ans;
        
    }
};