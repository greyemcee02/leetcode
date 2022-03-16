#include<bits/stdc++.h>

using namespace std;

int maxRotateFunction(vector<int>& nums) {
    int mid = 0, n = nums.size();
    long long res = 0;
    queue<int> Q;
    for(int i = n-1; i >=0 ; i--){
        if(i > 0 && i < n-1) mid+=nums[i];
        res += (i)*nums[i];
        Q.push(nums[i]);
    }
    long long res1 = res;
    for(int i = 1; i <= n - 1; i++){
        mid+=Q.back();
        int x = Q.front();
        res1+=mid - x*(n-1);
        Q.pop();
        Q.push(x);
        mid -= Q.front();
        res = max(res1, res);
    }
    return res;
}

int main(){
    vector<int> vt = {100};
    cout << maxRotateFunction(vt);
    return 0;
}