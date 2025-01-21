class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> preRow1(n, 0);
        vector<long long> preRow2(n, 0);

        preRow1[0] = grid[0][0];
        preRow2[0] = grid[1][0];

        for (int i = 1; i < n; i++) {
            preRow1[i] = preRow1[i - 1] + grid[0][i];
            preRow2[i] = preRow2[i - 1] + grid[1][i];
        }

        long long res = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long top = (i == n - 1) ? 0 : preRow1[n - 1] - preRow1[i];
            long long bottom = (i == 0) ? 0 : preRow2[i - 1];
            long long secondRobot = max(top, bottom);
            res = min(res, secondRobot);
        }

        return res;
    }
};
