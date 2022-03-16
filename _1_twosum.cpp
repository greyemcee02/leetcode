#include<bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    set<int> st;
    vector<int> vt;
    int i, j;
    st.insert(nums[0]);
    for(i = 1; i < nums.size(); i++){
        if(st.count(target - nums[i])) break;
        st.insert(nums[i]);
    }
    for(int j = 0; j < i; j++)
        if(target - nums[i]==nums[j]){
            vt.push_back(j);
            vt.push_back(i);
        }
    return vt;
}

int main(){
    vector<int> vt = {2,7,11,15};
    int target = 9;
    vector<int> kq = twoSum(vt, target);
    for(auto it : kq)
        cout << it << endl;
    return 0;
}