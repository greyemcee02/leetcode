#include<bits/stdc++.h>

using namespace std;

vector<int> countBits(int n) {
    vector<int> vt;
    for(int i = 0; i <= n; i++)
        vt.push_back(__builtin_popcount(i));
    return vt;
}

int main(){
    vector<int> kq;
    kq = countBits(5);
    for(auto it : kq)
        cout << it << " ";
    return 0;
}