#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int check[12] = {0}, mncr[22] = {0}, sdcr[22] ={0};
int sz, vt[10];
int cnt = 0;


void Try(int i){
    for(int j = 0; j < sz; j++){
        if(!check[j] && !mncr[i-j+sz] && !sdcr[i+j+1]){
            vt[i] = j;
            check[j] = 1;
            mncr[i-j+sz] = 1;
            sdcr[i+j+1] = 1;
            if(i == sz-1){
                cnt++;
            }           
            else Try(i+1);
            check[j] = 0;
            mncr[i-j+sz] = 0;
            sdcr[i+j+1] = 0;
        }
    }
}

int totalNQueens(int n) {
    sz = n;
    Try(0);
    return cnt;
}


int main(){
    int res = totalNQueens(8);
    cout << res;
    return 0;
}