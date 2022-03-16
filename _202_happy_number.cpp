#include<bits/stdc++.h>

using namespace std;

bool isHappy(int n) {
	int t = 0;
        while(t != 1){
            t = 0;
            while(n > 0){
                t += (n % 10) * (n % 10);
                n /= 10;
            }
            n = t;
            if(t == 89) return false;
        }
        return true;
}

int main(){
	cout << isHappy(2992929);
	return 0;
}
