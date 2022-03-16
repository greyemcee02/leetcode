#include<bits/stdc++.h>

using namespace std;

int getMaximumGenerated(int n) {
    int mx = 0;
    vector<int> vt;
    vt.push_back(0);
    vt.push_back(1);
    if(n == 1) return 1;
    for(int i = 2; i <= n; i++){
        if(i%2==0)
            vt.push_back(vt[i/2]);
        else
            vt.push_back(vt[(i-1)/2] + vt[1+ (i-1)/2]);
        mx = max(mx, vt[i]);
    }  
    return mx;
}

int main(){
    cout << getMaximumGenerated(4);
    return 0;
}