#include<bits/stdc++.h>

using namespace std;

string toLowerCase(string s) {
    int n = s.length();
    for(int i = 0; i < n; i++)
        s[i] = tolower(s[i]);
    return s;
}

int main(){
    cout << toLowerCase("HelLo") ;
    return 0;
}