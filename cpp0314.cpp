#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string,int> mp;
    string s;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        mp[s]++;
    }
    cout << mp.size();
    
    return 0;
}
