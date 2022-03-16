#include<bits/stdc++.h>

using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    if(nums[0] >= target) return 0;
    else if(nums[r] < target) return r+1;
    else{
        while(l < r){
            int mid = (l+r)/2;
            if(nums[mid] >= target){
                r = mid;
            }
            else l = mid+1;
        }
        return l;        
    }
}
int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;
    cout << searchInsert(nums, target) << endl;
    return 0;
}