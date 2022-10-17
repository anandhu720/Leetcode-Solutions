class Solution {
public:
    bool checkIfPangram(string sentence) {
        int nums[26] = {0};
        for(auto it : sentence) {
            nums[it - 'a']++;
        }
        
        for(int i=0;i<26;i++) {
            if(nums[i] == 0) return false;
        }
        
        return true;
    }
};