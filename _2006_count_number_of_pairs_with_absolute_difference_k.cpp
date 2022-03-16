#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int countKDifference(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int p1 = 0, p2 = 1, cnt = 0;
    while(p1 < p2 && p2 < nums.size()){
        if(abs(nums[p1] - nums[p2]) == k){
            int tp1 = p1, tp2 = p2;
            p1++;
            p2++;
            while(p1 < tp2 && nums[p1] == nums[p1 - 1])
                p1++;
            while(p2 < nums.size() && nums[p2] == nums[p2-1])
                p2++;
            cnt += (p1 - tp1) * (p2 - tp2);
        }
        else if(abs(nums[p1] - nums[p2]) < k || p1 == p2 - 1) p2++;
        else p1++; 
    }        
    return cnt;
}

int main(){
    vector<int> nums = {9,3,1,1,4,5,4,9,5,10};
    cout << countKDifference(nums, 1);
    return 0;
}
