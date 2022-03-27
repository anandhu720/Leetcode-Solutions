class Solution {
private:
	void dfs(int i, int j, int n, int m, int tempans, vector<vector<int>>&a, int &ans) {
		if (i < 0 || j < 0 || i == n || j == m || a[i][j] <= 0) {
			return;
		}
		tempans += a[i][j];
		a[i][j] = -a[i][j]; // mark as visited
		ans = max(ans, tempans);
		dfs(i + 1, j, n, m, tempans, a, ans);
		dfs(i - 1, j, n, m, tempans, a, ans);
		dfs(i, j + 1, n, m, tempans, a, ans);
		dfs(i, j - 1, n, m, tempans, a, ans);
		a[i][j] = -a[i][j]; // mark as not visited
		tempans -= a[i][j];
	}

public:
	int getMaximumGold(vector<vector<int>>& a) {
		int ans = 0;
		int n = a.size();
		int m = a[0].size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j]) {
					dfs(i, j, n, m, 0, a, ans);
				}
			}
		}
		return ans;
	}
};