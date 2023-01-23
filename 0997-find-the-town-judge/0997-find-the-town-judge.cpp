class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> nums(N + 1, 0);
        for (auto it : trust){
            nums[it[0]]--;
            nums[it[1]]++;
        }
        for (int i = 1; i <= N; ++i) {
            if (nums[i] == N - 1) return i;
        }
        return -1;
    }
};