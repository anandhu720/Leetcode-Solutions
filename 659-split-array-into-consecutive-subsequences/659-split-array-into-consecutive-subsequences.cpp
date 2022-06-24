class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> left,end;
        
        for(auto ele : nums) left[ele]++;
        
        for(auto ele : nums) {
            if(left[ele] == 0) continue; // no element left
            left[ele]--; // going to use that element
            
            if(end[ele - 1] > 0) {
                
                end[ele-1]--;
                end[ele]++;
                
            }else if(left[ele+1] > 0 and left[ele+2] > 0) {
                
                left[ele+1]--;
                left[ele+2]--;
                end[ele+2]++;
                
            }else 
                return false;
            
        }
        
        return true;
    }
};