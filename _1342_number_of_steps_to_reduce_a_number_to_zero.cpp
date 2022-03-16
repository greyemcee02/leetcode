#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

int numberOfSteps(int num) {
    int cnt = 0;    
    while(num > 0){
        if(num%2 == 0)
            num/=2;
        else
            num--;
        cnt++;
    }    
    return cnt;    
}


int main(){
    int n = 234;
    cout << numberOfSteps(n);
    return 0;
}