#include<bits/stdc++.h>

using namespace std;

double angleClock(int hour, int minutes) {
    double mn = (double)minutes *6, h, res ;
    if(hour == 12) hour = 0;
    h = (double)hour * 30 + (double)(minutes *0.5);
    if(h > mn) res = h-mn;
    else res = mn - h;
    return min(res, 360-res);
}

int main(){
    cout << angleClock(1, 57);
    return 0;
}