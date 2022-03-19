#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string getPermutation(int n, int k) {
    vector<int> vec(n );
    for(int i = 1; i <= n; i++)
        vec[i-1] = i;
    int x = 0;
    while(next_permutation(vec.begin(), vec.end())){
        x++;
        if(x == k) break;
    }
    string res;
    for(auto it : vec)
        res.push_back((char)(it + '0'));
    return res;
}

int main() {
    return 0;
}