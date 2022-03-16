#include <iostream>
#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> DP(n, vector<int> (m));
        DP[0][0] = grid[0][0];
        for(int i = 1; i < n; i++){
            DP[i][0] = DP[i-1][0] + grid[i][0];
        }
        for(int i = 1; i < m; i++){
            DP[0][i] = DP[0][i-1] + grid[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                DP[i][j] = grid[i][j] +  min(DP[i-1][j], DP[i][j-1]);
            }
        }
        return DP[n-1][m-1];
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(auto &it : grid[i])
            cin >> it;
    }
    cout << minPathSum(grid) << endl;
    return 0;
}