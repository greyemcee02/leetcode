#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i+=2){
        for(int j = 1; j <= nums[i]; j++)
            res.push_back(nums[i+1]);
    }
    return res;
}


int main(){
    vector<int> nums = {1,1,2,3};
    vector<int> res = decompressRLElist(nums);
    for(auto it : res)
        cout << it << " ";
    return 0;
}