#include<bits/stdc++.h>
#include<string>
using namespace std;

string convert(string s, int numRows) {
    int sz = s.length();
    if(sz <= numRows || numRows == 1) return s;
    string str = "";
    for(int i = 0; i < numRows; i++){
        int j = i, st = (numRows - 1  - i) * 2;
        while(j < sz){
            str+=s[j];
            if(i == 0)
                j+=st;
            else{
                if(j + st >= sz) break;
                else{
                    if(st!=0){
                        j+= st;
                        str+=s[j];
                    } 
                    j += 2*i;
                } 
            }
        }
    }    
    return str;
}

int main(){
    string s = "ABCDE";
    cout << convert(s, 4);
    return 0;
}