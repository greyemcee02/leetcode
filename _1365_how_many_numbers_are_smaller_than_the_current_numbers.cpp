#include<bits/stdc++.h>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        int cnt = 0;
        for(int j = 0; j < nums.size(); j++)
            if(nums[j] < nums[i] && j != i) cnt++;
        result.push_back(cnt);
    }
    return result;
}

int main(){
    vector<int> nums;
    nums = {8,1,2,2,3};
    vector<int> result;
    result = smallerNumbersThanCurrent(nums);
    for(auto it : result)
        cout << it << " ";
    return 0;
}