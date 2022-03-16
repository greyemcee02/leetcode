#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> vt(numRows);
    vt[0].push_back({1});
    for(int i = 1; i < numRows; i++){
        vector<int> vec;
        for(int j = 0; j <= i; j++){
            if(j == 0|| j == i) 
                vec.push_back(1);
            else
                vec.push_back(vt[i-1][j-1] + vt[i-1][j]);
        }
        vt.at(i) = vec ;
    }
    return vt;
}


int main(){
    int numRows = 5;
    vector<vector<int>> vt = generate(numRows);
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < vt[i].size(); j++)
            cout << vt[i][j] << " ";
        cout << endl;
    }
    return 0;
}