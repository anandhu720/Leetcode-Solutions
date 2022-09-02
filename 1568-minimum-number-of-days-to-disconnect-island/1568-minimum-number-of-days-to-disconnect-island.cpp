class Solution {
public:
    int t = 0;
    bool isArticulation = 0;
    vector<pair<int, int>>moves = {{ -1, 0}, {0, -1}, {0, 1}, {1, 0}};
    bool check(int r, int c, int n, int m) {
        return (r<n and r >= 0 and c<m and c >= 0);
    }

    void tarjan(int r, int c, vector<vector<int>>&a, vector<vector<int>>&visit_time, vector<vector<int>>&low_time, vector<vector<pair<int, int>>>&parent, int parR, int parC, int n, int m) {
        visit_time[r][c] = low_time[r][c] = t;
        parent[r][c] = {parR, parC};
        t += 1;
        int child = 0;
        for (auto x : moves) {
            if (check(r + x.first, c + x.second, n, m) and a[r + x.first][c + x.second] == 1) {
                if (visit_time[r + x.first][c + x.second] == -1) {
                    child += 1;
                    tarjan(r + x.first, c + x.second, a, visit_time, low_time, parent, r, c, n, m);
                    low_time[r][c] = min(low_time[r][c], low_time[r + x.first][c + x.second]);

                    if (child > 1 and parent[r][c].first == -1) {
                        isArticulation = 1;
                        // return;
                    }

                    if (low_time[r + x.first][c + x.second] >= visit_time[r][c] and parent[r][c].first != -1) {
                        isArticulation = 1;
                        // return;
                    }
                }
                else if (r + x.first != parent[r][c].first or c + x.second != parent[r][c].second) {
                    low_time[r][c] = min(low_time[r][c], low_time[r + x.first][c + x.second]);
                }
            }
        }
    }

    int minDays(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int zeroSum = 0, oneSum = 0;
        for (auto x : grid) {
            for (auto y : x) {
                if (y == 0) zeroSum += 1;
                if (y == 1) oneSum += 1;
            }
        }
        if (oneSum == 1) {
            return 1;
        }

        if (zeroSum == n * m) {
            return 0;
        }
        if (oneSum == n * m) {
            return 2;
        }
        vector<vector<int>>visit_time(n, vector<int>(m, -1));
        vector<vector<int>>low_time(n, vector<int>(m, INT_MAX));
        vector<vector<pair<int, int>>>parent(n, vector<pair<int, int>>(m));
        bool tarjanDone = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 and visit_time[i][j] == -1 and !tarjanDone) {
                    tarjan(i, j, grid, visit_time, low_time, parent, -1, -1, n, m);
                    tarjanDone = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 and visit_time[i][j] == -1) {
                    return 0;
                }
            }
        }

        if (isArticulation) {
            return 1;
        }
        return 2;
        // return 0;
    }
};