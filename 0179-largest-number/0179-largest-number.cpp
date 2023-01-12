class Solution {
public:
    static bool comp(string &a,string &b) {
        string x = a+b;
        string y = b+a;
        
        return x > y;
    }
    string largestNumber(vector<int>& nums) {
        
        int i=0;
        for(i=0;i<nums.size();i++)
            if(nums[i] > 0) break;
        if(nums.size() == i) return "0";
        
        vector<string> v;
        for(auto it : nums) v.push_back(to_string(it));
        
        sort(v.begin(),v.end(),comp);
        
        string ans;
        for(auto it : v) ans += it;
        
        return ans;
    }
};