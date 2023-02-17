class Solution {
private:
    bool dfs(int mid,string &t,string &p,vector<int> &nums) {
        unordered_set<int> uset;
        
        for(int i=0;i<mid;i++) {
            uset.insert(nums[i]);
        }
        
        string s;
        for(int i=0;i<t.length();i++) {
            if(uset.count(i) > 0) continue;
            s.push_back(t[i]);
        }
        
        int left = 0,right = 0;
        while(left < s.length() and right < p.length()) {
            if(s[left] == p[right]) {
                left++;
                right++;
            }else{
                left++;
            }
        }
        
        return right == p.length();
    }
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int left = 0,right = removable.size();
        int res = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,s,p,removable)) {
                res = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        
        return res;
    }
};