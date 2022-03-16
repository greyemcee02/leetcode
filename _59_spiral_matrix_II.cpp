#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generateMatrix(int n) {
    int b = 0, cnt = 1;
    vector<vector<int>> vt(n, vector<int>(n, 0));
    while(b <  n){
        for(int i = b ; i < n - b ; i++){
            vt[b][i] = cnt;
            cnt++;
            if(cnt == n*n+1) return vt;
        }
        for(int i = b + 1; i < n - b ; i++){
            vt[i][n-b-1] = cnt;
            cnt++;
            if(cnt == n*n+1) return vt;
        }
        for(int i = n - b - 2 ; i >= b ; i--){
            vt[n-b-1][i] = cnt;
            cnt++;
            if(cnt == n*n+1) return vt;
        }
        for(int i = n - b -2 ; i > b ; i--){
            vt[i][b] = cnt;
            cnt++;
            if(cnt == n*n+1) return vt;
        }
        b++;
    }        
    return vt;
}

int main(){
    vector<vector<int>> vt;
    vt = generateMatrix(3);
    for(int i = 0; i < vt.size(); i++){
        for(auto it : vt[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}