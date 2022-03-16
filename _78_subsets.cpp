#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> res;
int n;
vector<int> X;
void Try(int i, vector<int> &nums){
    for(int j = 0; j <= 1; j++){
        if(j) X.push_back(nums[i]);
        if(i == n - 1) res.push_back(X);
        else Try(i+1, nums); 
        if(j) X.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    n = nums.size();
    Try(0, nums);
    return res;
}

int main(){
    vector<int> nums = {1,2,3};
    return 0;
}