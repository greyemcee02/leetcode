#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int sz = grid.size(), cnt = 0;
    for(int i = 0; i < sz; i++){
        for(int j = grid[i].size() - 1; j >= 0; j--){
            if(grid[i][j] < 0) cnt++;
            else break;
        }
    }
    return cnt;
}


int main(){
    vector<vector<int>> grid = {{5,1,0},{-5,-5,-5}};
    cout << countNegatives(grid);
    return 0;
}