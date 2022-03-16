#include<bits/stdc++.h>

using namespace std;


void Try(int i, int  sz, vector<int> &nums ,vector<int> &x, vector<int> &check, vector<vector<int>> &res){
    for(int j = 0; j < nums.size(); j++){
        if(!check[j]){
            check[j] = 1;
            x[i] = nums[j];
            if(i == sz - 1)
                res.push_back(x);
            else Try(i+1, sz, nums, x, check, res);
            check[j] = 0;        
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    int sz = nums.size();
    vector<int> check(sz, 0);
    vector<int> x(sz, 0);
    vector<vector<int>> res;
    Try(0, sz, nums, x, check, res);
    return res;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> vt = permute(nums);
    for(int i = 0; i < vt.size(); i++){
        for(auto it : vt[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}