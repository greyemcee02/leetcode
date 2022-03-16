#include<bits/stdc++.h>

using namespace std;

int check(vector<int> &nums){
    int ps = nums.size() - 2;
    while(ps >= 0 && nums[ps] >= nums[ps+1])
        ps--;
    return ps;
}

void permute(vector<int> &nums, vector<vector<int>> &res, int ps){
    int ps2 = nums.size() - 1;
    while(nums[ps] >= nums[ps2]) ps2--;
    swap(nums[ps], nums[ps2]);
    int a = ps + 1, b = nums.size() - 1;
    while(a < b){
        swap(nums[a], nums[b]);
        a++; b--;
    }
    res.push_back(nums);
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    res.push_back(nums);
    while(1){
        int ps = check(nums);
        if(ps == -1) break;
        else
            permute(nums, res, ps);
    }
    return res;
}

int main(){
    vector<int> nums = {2,2,1,1};
    vector<vector<int>> vt = permuteUnique(nums);
    for(int i = 0; i < vt.size(); i++){
        for(auto it : vt[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}