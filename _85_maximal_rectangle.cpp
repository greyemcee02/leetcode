#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> F){
	int sz = F.size();
	vector<int> left(sz), right(sz);
	stack<int> stk1, stk2;
	for(int i = 0; i < sz; i++){
		if(stk1.empty()){
			left[i] = -1;
			stk1.push(i);
		}
		else{
			while(!stk1.empty()){
				int k = stk1.top();
				if(F[k] < F[i]){
					left[i] = k;
					break;
				}
				else stk1.pop();
			}
			if(stk1.empty()) left[i] = -1;
			stk1.push(i);
		}
	}
	for(int i = sz - 1; i >= 0; i--){
		if(stk2.empty()){
			right[i] = sz;
			stk2.push(i);
		}
		else{
			while(!stk2.empty()){
				int k = stk2.top();
				if(F[k] < F[i]){
					right[i] = k;
					break;
				}
				else stk2.pop();
			}
			if(stk2.empty()) right[i] = sz;
			stk2.push(i);
		}
	}
	int res = 0;
	for(int i = 0; i < sz; i++){
		res = max(res, (right[i] - left[i] - 1)*F[i] );
	}
	return res;
}

int maximalRectangle(vector<vector<char>>& matrix) {
	int n = matrix.size(), m = matrix[0].size();
	vector<vector<int>> F(n, vector<int>(m));
	for(int i = 0; i < m; i++){
		F[0][i] = matrix[0][i] - '0';
	}
	for(int i = 1; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == '1')
				F[i][j] = F[i-1][j] + 1;
		}
	}        
	int res = 0;
	for(int i = 0; i < n; i++){
		res = max(res, solve(F[i]));
	}
	return res;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> matrix(n, vector<char>(m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			cin >> matrix[i][j];
	}
	cout << maximalRectangle(matrix);
	return 0;
}
