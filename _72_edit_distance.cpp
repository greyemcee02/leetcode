#include<bits/stdC++.h>

using namespace std;

int minDistance(string word1, string word2) {
	int n = word1.length(), m = word2.length();
	vector<vector<int>> DP(n + 1, vector<int>(m+1, 0));
	for(int i = 0; i <= n; i++)
		DP[i][0] = i;
	for(int i = 0; i <= m; i++)
		DP[0][i] = i;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(word1[i-1] == word2[j-1])
				DP[i][j] = DP[i-1][j-1];
			else{
				DP[i][j] = 1 + min(min(DP[i-1][j], DP[i][j-1]), DP[i-1][j-1]);
			}
		}
	} 
	return DP[n][m];      
}

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	cout << minDistance(str1, str2);
	return 0;
}
