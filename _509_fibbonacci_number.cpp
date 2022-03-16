#include<bits/stdc++.h>

using namespace std;

int fib(int n) {
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    for(int i = 2; i <= n; i++)
        fib.push_back(fib[i-2] + fib[i-1]);
    return fib[n];
}

int main(){
    cout << fib(30) << endl;
    return 0;
}