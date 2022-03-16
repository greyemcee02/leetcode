#include<bits/stdc++.h>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> vt;
    sort(nums.begin(), nums.end());
    int sz = nums.size();
    for(int i = 0; i < sz-2; i++){
        if(i > 0)
            while(nums[i] == nums[i-1] && i < sz-2) i++;
        int left = i + 1, right = sz-1;
        while(left < right){
            if(nums[i] + nums[left] + nums[right] == 0){
                // vt.at(k).at(0) = nums[i];
                // vt.at(k).at(1) = nums[left];
                // vt.at(k).at(2) = nums[right];
                vt.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                while(nums[left] == nums[left-1] && left < right) left++;
                while(nums[right] == nums[right+1] && right >0) right--;
            }
            else if(nums[i] + nums[left] + nums[right] > 0)
                right--;
            else left++;
        }
    }
    return vt;
}

int main(){
    vector<int> nums = {0,0,0};
    vector<vector<int>> vt = threeSum(nums);
    for(int i = 0; i < vt.size(); i++){
        for(int j = 0; j < 3; j++)
            cout << vt.at(i).at(j) << " ";
        cout << endl;
    }
    return 0;
}