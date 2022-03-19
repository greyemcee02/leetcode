#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> digits2(digits.size() + 1);
    int nho = 1;
    for(int i = digits.size() - 1; i >= 0; i--){
        int tmp = digits[i]  + nho;
        digits[i] = tmp%10;
        nho = tmp/10;
        digits2[i+1] = digits[i];
    }
    if(nho>0){
        digits2[0] = nho;+
        return digits2;
    }
    return digits;
}

int main() {
    
    return 0;
}