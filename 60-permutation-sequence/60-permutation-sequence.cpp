class Solution {
public:
    /*
    * Time = O(n*n) Space = O(n)
    */
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> nums;
        for(int i=1;i<n;i++){
            fact *= i;
            nums.push_back(i);
        }
        
        nums.push_back(n);
        string ans = "";
        k = k-1;
        
        while(1){
            ans += to_string(nums[k/fact]);
            nums.erase(nums.begin() + k/fact); //Takes O(n) time
            if(nums.size() == 0){
                break;
            }
            
            k %= fact;
            fact /= nums.size(); 
        }
        
        return ans;
    }
};