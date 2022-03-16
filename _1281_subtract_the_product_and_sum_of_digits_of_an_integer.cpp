#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

int subtractProductAndSum(int n) {
    int prd = 1, sum = 0;
    while(n > 0){
        int tmp = n%10;
        n/=10;
        prd *= tmp;
        sum += tmp;
    }   
    return prd - sum;
}


int main(){
    int n = 234;
    cout << subtractProductAndSum(n);
    return 0;
}