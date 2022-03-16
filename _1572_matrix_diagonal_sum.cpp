#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int res = 0, sz = mat.size();
    for(int i = 0; i < sz;  i++)
        for(int j = 0; j < mat[i].size(); j++)
            if(i == j || i + j == sz - 1)
                res += mat[i][j];
    return res;   
}


int main(){
    vector<vector<int>> vt({{1,2,3},
                            {4,5,6},
                            {7,8,9}});
    cout << diagonalSum(vt);
    return 0;
}