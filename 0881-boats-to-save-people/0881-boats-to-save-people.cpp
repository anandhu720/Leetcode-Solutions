class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0,right = people.size()-1;
        int cnt = 0;
        while(left < right) {
            if(people[left] + people[right] <= limit) {
                cnt++;
                left++;
                right--;
            }else{
                cnt++;
                right--;
            }
        }
        if(left == right) cnt++;
        return cnt;
    }
};