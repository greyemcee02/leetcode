#include<bits/stdc++.h>
#include<vector>
using namespace std;

string addBinary(string a, string b) {
    string res;
    int sz = max(a.length(), b.length());
    while(a.length() < sz)
        a = '0' + a;
    while(b.length() < sz)
        b = '0' + b;
    int nho = 0, i = sz-1;
    while(i >= 0){
        int tmp = (a[i] - '0') + (b[i]-'0') + nho;
        res = (char)(tmp%2 +'0')+res;
        nho = tmp/2;
        i--;
    }  
    if(nho > 0)
        res = (char)((nho + '0')) + res;
    return res;

}

int  main(){
    cout << addBinary("1010","1011");
    return 0;
}