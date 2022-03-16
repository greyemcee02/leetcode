#include<iostream>
#include<vector>
using namespace std;

int countVowelStrings(int n) {
    vector<int> count(5, 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < 5; j++)
            count[j] = count[j]+count[j-1];
    }        
    return count[4];
}

int main() {
    
    return 0;
}