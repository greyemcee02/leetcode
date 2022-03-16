#include<bits/stdc++.h>

using namespace std;

string intToRoman(int num) {
        string res;
        vector<int> itg = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        vector<string> str = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"} ;
        for(int i = 12; i >= 0; i--){
            while(num >= itg[i]){
                res+= str[i];
                num-=itg[i];
            }
        }
        return res;
}

int main(){
    cout << intToRoman(1994);
    return 0;
}