#include<bits/stdc++.h>

using namespace std;



int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int i = 0, sz = nums.size(), mn = INT_MAX;
    while(i < sz - 2){
        if( i > 0 )
            while(nums[i] == nums[i-1] && i < sz - 2) i++;
        int left = i + 1, right = sz - 1, tmp;
        while(left < right){
            tmp = nums[i] + nums[left] + nums[right];
            if(abs(tmp - target) < abs(mn-target)) mn = tmp;
            if(tmp == target) return target;
            else if(tmp < target){
                left++;
                while(nums[left] == nums[left-1] && left < right) 
                    left++;
            }
            else{
                right--;
                while(nums[right] == nums[right+1] && right > left) right--; 
            }
        }
        i++;
    }
    return mn;    
}

int main(){
    vector<int> nums = {1,1,1,1};
    int target = 1;
    cout << threeSumClosest(nums, target);
    return 0;
}