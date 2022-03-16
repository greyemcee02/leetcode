#include<bits/stdc++.h>

using namespace std;

bool squareIsWhite(string coordinates) {
    if((coordinates[0] - 'a' + 1)%2!=0 && (coordinates[1] - '0')%2==0 ) return true;
    if((coordinates[0] - 'a' + 1)%2==0 && (coordinates[1] - '0')%2!=0 ) return true;
    return false;
}

int main(){
    cout << squareIsWhite("b2");
    return 0;
}