#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!=val)
            nums[k++] = nums[i];
    }
    return k;
}

int main(){
    vector<int> vt = {0,1,2,2,3,0,4,2};
    cout << removeElement(vt, 2);
    return 0;
}