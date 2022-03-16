#include<bits/stdc++.h>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int len = nums.size();
    for(int i = 0; i < len; i++)
        nums.push_back(nums[i]);
    return nums;        
}
int main(){
    vector<int> vt = {0, 2, 1, 5, 3, 4};
    vector<int> kq = getConcatenation(vt);
    for(auto it : kq)
        cout << it << " ";
    return 0;
}