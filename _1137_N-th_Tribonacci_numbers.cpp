#include<bits/stdc++.h>

using namespace std;

int tribonacci(int n) {
    vector<int> tri;
    tri.push_back(0);
    tri.push_back(1); 
    tri.push_back(1);
    for(int i = 3; i <= n; i++)
        tri.push_back(tri[i-3] + tri[i-2] + tri[i-1] );
    return tri[n];
}

int main(){
    cout << tribonacci(25) << endl;
    return 0;
}