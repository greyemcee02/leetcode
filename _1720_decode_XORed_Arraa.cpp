#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    vector<int> decodee;
    decodee.push_back(first);
    for(int i = 0; i < encoded.size(); i++)
        decodee.push_back(encoded[i] ^ decodee[i]);
    return decodee;
}

int main(){
    vector<int> encoded = {6,2,7,3};
    vector<int> dcod = decode(encoded, 4);
    for(auto it : dcod)
        cout << it << " ";
    return 0;
}