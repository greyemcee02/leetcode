#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int sz = nums.size();
    int ps = sz - 2;
    int a, b;
    while(ps >= 0 && nums[ps] >= nums[ps + 1])
        ps--;
    if(ps == - 1){
        a = 0, b = sz - 1;  
    }        
    else{
        int p1 = sz - 1;
        while(nums[p1] <= nums[ps])
            p1--;
        swap(nums[p1], nums[ps]);
        a = ps + 1; b = sz - 1;
    }
    while(a < b){
        swap(nums[a], nums[b]);
        a++;
        b--;
    }
}

int main(){
    vector<int> vt = {1};
    nextPermutation(vt);
    for(auto it : vt)
        cout << it << " ";
    return 0;
}