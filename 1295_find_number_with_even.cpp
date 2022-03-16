#include<bits/stdc++.h>

using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        int tmp = log10(nums[i]) + 1; 
        if(tmp % 2 == 0) count++;
        //cout << tmp << endl;
    }
    return count;      
}

int main(){
    vector<int> nums = {100000};
    cout << findNumbers(nums) << endl;
   // cout << ((log(1000)/log(10)) + 1);
    return 0;
}