#include<iostream>

using namespace std;

int mySqrt(int x) {
    int i;
    for(i = 1; i <= 46341; i++){
        long long tmp = i * i;
        if(tmp == x){
            return i;
        }
        else if(tmp > x){
            break;
        }
    }        
    return i - 1;
}

int main() {

    return 0;
}