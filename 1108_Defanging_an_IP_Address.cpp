#include<bits/stdc++.h>

using namespace std;

string defangIPaddr(string address) {
    string str;
    for(int i = 0; i < address.length(); i++){
        if(address[i] == '.') str += "[.]";
        else str += address[i];
    }        
    return str;
}

int main(){
    string str = "255.100.50.0";
    cout << defangIPaddr(str) ;
    return 0;
}