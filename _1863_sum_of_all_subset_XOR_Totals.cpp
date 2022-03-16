#include<bits/stdc++.h>

using namespace std;

int res, n;
vector<int> numss;

void Try(int i, int s){
    for(int j = 0; j <= 1; j++){
        if(j == 1) s^=numss[i-1];
        if(i == n){
            res+=s;
            cout << s << endl;
        } 
        else 
            Try(i+1, s);
        s^=j;
    }
}

int subsetXORSum(vector<int>& nums) {
    n = nums.size();
    numss = nums;
    res = 0;
    Try(1, 0);
    return res;
}

int main(){
    vector<int> nums = {3,4,5,6,7,8};
    cout << subsetXORSum(nums);
    return 0;
}