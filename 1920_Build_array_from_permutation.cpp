#include<bits/stdc++.h>

using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> vt;
    for(auto it = nums.begin(); it != nums.end(); ++it){
        vt.push_back(nums[*it]);
    }  
    return vt;        
}
int main(){
    vector<int> vt = {0, 2, 1, 5, 3, 4};
    vector<int> kq = buildArray(vt);
    for(auto it : kq)
        cout << it << " ";
    return 0;
}