#include<bits/stdc++.h>

using namespace std;

int lwb(vector<int> &nums, int target){
    int l = 0, r = nums.size() - 1;
    while(l < r){
        int mid = (l+r)/2;
        if(nums[mid] < target)
            l = mid+1;
        else   
            r = mid;
    }
    if(nums[l] == target) return l;
    return -1;
}

int ubb(vector<int> &nums, int ps, int target){
    int l = ps, r = nums.size() - 1;
    if(nums[r] == target) return r;
    while(l < r){
        int mid = (l+r+1)/2;
        if(nums[mid] == target) l = mid;
        else r = mid-1;
    }
    return l;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res(2,-1);
    if(nums.size() == 0) return res;
    int st = lwb(nums, target);
    if(st != -1){
        int ed = ubb(nums, st, target);
        res[0] = st;
        res[1] = ed;
    }
    return res;
}

int main(){
    vector<int> nums = {};
    vector<int> res = searchRange(nums, 9);
    cout << res[0] << " " << res[1];
    return 0;
}