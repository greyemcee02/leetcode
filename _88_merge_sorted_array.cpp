#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0, j = 0, c = 0;
    vector<int> ns;
    for(int x = 0; x < m; x++) ns.push_back(nums1[x]);
    nums1.clear();
    while(i <= m || j <= n){
        if(i == m && j == n) break;
        else if( i == m ) nums1.push_back(nums2[j++]);
        else if( j == n || ns[i] < nums2[j]) nums1.push_back(ns[i++]);
        else nums1.push_back(nums2[j++]);
    }
    for(auto it : nums1)
        cout << it << " ";
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    merge(nums1, 3, nums2, 3);
    return 0;
}