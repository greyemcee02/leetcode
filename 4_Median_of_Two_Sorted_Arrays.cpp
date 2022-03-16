#include<bits/stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), m =nums2.size(), len = n + m;
    int p1 = 0, p2 = 0;
    stack<int> stk;
    while(stk.size() < len/2 + 1){
        if(p1 == n ) 
            stk.push(nums2[p2++]);
        else if(p2 == m) 
            stk.push(nums1[p1++]);
        else if(nums1[p1] > nums2[p2])
            stk.push(nums2[p2++]);
        else
            stk.push(nums1[p1++]);
    }
    int mid = stk.top(); stk.pop();
    if(len%2!=0) return (double) mid;
    return (double)(mid + stk.top())/2;
}

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {1};
    cout << fixed << setprecision(5) << findMedianSortedArrays(nums1, nums2);
   return 0;
}