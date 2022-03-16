#include<bits/stdc++.h>

using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> vt;
    int k = 0;
    for(int i = 0; i < index.size(); i++){
        int x = nums[k++];
        vt.insert(vt.begin()+index[i], x);
    }    
    return vt;
}

int main(){
    vector<int> num = {0,1,2,3,4}, index = {0,1,2,2,1};
    
    return 0;
}