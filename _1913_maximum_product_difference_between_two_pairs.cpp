#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int maxProductDifference(vector<int>& nums) {
    int min1 = INT_MAX, min2 , max1 = INT_MIN, max2;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] >= max1){
            max2 = max1;
            max1 = nums[i];
        }
        else
            max2 = max(max2, nums[i]);
        if(nums[i] <= min1){
            min2 = min1;
            min1 = nums[i];
        }
        else
            min2 = min(min2, nums[i]);
    }
    return (max1*max2) - min1*min2;
}

int main(){
    vector<int> arr = {1,1,1,1};
    cout << maxProductDifference(arr);

    return 0;
}
