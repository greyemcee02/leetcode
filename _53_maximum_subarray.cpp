#include<bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int res = INT_MIN, sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum+=nums[i];
        res = max(res, sum);
        if(sum <0) sum = 0;
    }    
    return res;    
}

int main(){
    vector<int> nums = {4, -1};
    cout << maxSubArray(nums);
    return 0;
}