#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> sv;
    sv.push_back(1);
    for(int i = 1; i <= rowIndex; i++){
        vector<int> vec;
        for(int j = 0; j <= i; j++){
            if(j == 0|| j == i) 
                vec.push_back(1);
            else
                vec.push_back(sv[j-1] + sv[j]);
        }
        sv = vec;
    }
    return sv;
}


int main(){
    vector<int> vt = getRow(1);
    for(auto it : vt)
        cout << it << " ";
    return 0;
}