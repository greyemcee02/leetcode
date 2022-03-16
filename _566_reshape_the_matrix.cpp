#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size();
    if(m*n != r*c) return mat;
    int m1 = 0, n1 = 0;
    vector<vector<int>> res;
    for(int i = 0; i < r; i++){
        vector<int> tmp;
        for(int j = 0; j < c; j++){
            tmp.push_back(mat[m1][n1]);
            n1++;
            if(n1 == n){
                m1++;
                n1 = 0;
            }
        }
        res.push_back(tmp);
    }        
    return res;
}

int main(){
    vector<vector<int>> vt = {{1,2},{3,4}};
    vector<vector<int>> res =  matrixReshape(vt, 2, 4);
    for(int i = 0; i < res.size(); i++){
        for(auto it : res[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}