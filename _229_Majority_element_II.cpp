#include<bits/stdc++.h>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int numsz = nums.size();
    vector<int> res;
    map<int, int> mp;
    for(int i = 0; i < numsz; i++){
        if(mp[nums[i]] > -1){
            mp[nums[i]]++;
            if(mp[nums[i]] > numsz/3){
                res.push_back(nums[i]);
                mp[nums[i]] = -1;
            }
        }
    }
    return res;
}

int main(){
    vector<int> nums = {-1, -1, -1};
    vector<int> vt = majorityElement(nums);
    for(auto it : vt)
        cout << it << " ";
    return 0;
}