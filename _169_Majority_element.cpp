#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    int numsz = nums.size(), res;
    map<int, int> mp;
    for(int i = 0; i < numsz; i++){
        mp[nums[i]]++;
        if(mp[nums[i]] > numsz/2){
            res = nums[i];
            break;
        }
    }
    return res;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
}