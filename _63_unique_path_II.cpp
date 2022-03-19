#include<bits/stdc++.h>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	int n = obstacleGrid.size(), m = obstacleGrid[0].size();
	vector<vector<int>> DP(n, vector<int>(m));
	DP[0][0] = 1;
	if(obstacleGrid[0][0] == 1) DP[0][0] = 0; 
	for(int i = 1; i < n; i++){
		if(obstacleGrid[i][0] == 1){
			DP[i][0] = 0;
		}
		else {
			DP[i][0] = DP[i-1][0];
		}
		
	}
	for(int i = 1; i < m; i++){
		if(obstacleGrid[0][i] == 0)
			DP[0][i] = DP[0][i-1];
		else DP[0][i] = 0;
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(obstacleGrid[i][j] == 1){
				DP[i][j] = 0;
			}
			else DP[i][j] = DP[i-1][j] + DP[i][j-1];
		}
	}
	return DP[n-1][m-1];    
}

int main() {
	vector<vector<int>> nums = {{0,1},{0,0}};
	cout << uniquePathsWithObstacles(nums);
	return 0;
}
