#include<bits/stdc++.h>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    map<int,int> mp;
    int len = nums.size(), kq = 0;
    for(int i = 0; i < len; i++)
        mp[nums[i]]++;
    for(auto it : mp){
        int tmp = it.second;
        if(tmp > 1) kq+=(tmp*(tmp-1))/2;
    }        
    return kq;
}

int main(){
    vector<int> vt = {1,1,1,1};
    cout << numIdenticalPairs(vt);
    return 0;
}