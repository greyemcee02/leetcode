#include<iostream>
#include<string>
#include<vector>
using namespace std;

string multiply(string num1, string num2) {
    int n = num1.length(), m = num2.length();
    vector<int> F(n + m + 1, 0);
    int k = n + m;
    for(int i = n-1; i >= 0; i--){
        int x = k, nho = 0;
        for(int j = m - 1; j >= 0; j--){
            F[x] += (num1[i] - '0') * (num2[j] - '0');
            x--;
        }
        k--;
    }
    for(int i = n + m; i > 0; i--){
        F[i-1] += F[i]/10;
        F[i] = F[i]%10;
    }
    int i = 0;
    while(!F[i])
        i++;
    string res;
    for(i; i <= m + n; i++)
        res.push_back((char)(F[i] +'0'));
    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    multiply(s1, s2);
    return 0;
}