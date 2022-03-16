#include<bits/stdc++.h>

using namespace std;

int arrayPairSum(vector<int>& nums) {
    int mx = 0, sz = nums.size();
    for(int i = 0; i < sz ; i+=2)
        if(i%2 == 0) 
            mx += min(nums[i], nums[i+1]);
    for(int i = 0; i < sz; i++){
        int s = 0;
        for(int j = 0; j < sz ; j+=2){
            if(j < sz-1 && nums[j] < nums[j+1] )
                swap(nums[j+1], nums[j]);
            if(nums[])
            if(j%2!=0)
                s+=min(nums[j], nums[j-1]);
        }
        mx = max(mx, s);
    }        
    return mx;
}

int main(){
    vector<int> vt = {6,2,6,5,1,2};
    cout << arrayPairSum(vt);
    return 0;
}