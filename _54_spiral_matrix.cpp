#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int b = 0;
    vector<int> vt;
    int m = matrix.size(), n = matrix[0].size();
    while(b < min(m, n)){
        for(int i = b ; i < n - b ; i++){
            if(vt.size() == n*m) return vt;
            vt.push_back(matrix[b][i]);
        }
        for(int i = b + 1; i < m - b ; i++){
            if(vt.size() == n*m) return vt;
            vt.push_back(matrix[i][n-b-1]);
        }
        for(int i = n - b - 2 ; i >= b ; i--){
            if(vt.size() == n*m) return vt;
            vt.push_back(matrix[m-b-1][i]);
        }
        for(int i = m - b -2 ; i > b ; i--){
            if(vt.size() == n*m) return vt;
            vt.push_back(matrix[i][b]);
        }
        b++;
    }        
    return vt;
}

int main(){
    vector<vector<int>> vt = {{1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};
    vector<int> res = spiralOrder(vt);
    for(auto it : res)
        cout << it << " ";
    return 0;
}