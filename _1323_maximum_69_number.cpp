#include<bits/stdc++.h>

using namespace std;

int maximum69Number (int num) {
    string str = to_string(num);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '9'){
            str[i] = '6';
            int tmp;
            istringstream ss(str);
            ss >> tmp;
            num = max(num, tmp);
            str[i]='9';
        }
        else{
            str[i] = '9';
            int tmp;
            istringstream ss(str);
            ss >> tmp;
            num = max(num, tmp);
            str[i]='6';
        }
    }
    return num;
}

int main(){
    cout << maximum69Number(9669);
    return 0;
}