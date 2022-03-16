#include<bits/stdc++.h>

using namespace std;


void merge(vector<pair<int,int>> &pr, vector<int> &cnt, int left, int right){
    int mid = (left + right)/2;
    int i = left, j = mid + 1, k = 0;
    vector<pair<int, int>> tmp(right - left + 1);
    while(i <= mid && j <= right){
        if(pr[i].first > pr[j].first){
            cnt[pr[i].second] += right - j + 1;
            tmp[k++] = pr[i++];
        }
        else 
            tmp[k++] = pr[j++];
    }
    while(i <= mid)
        tmp[k++] = pr[i++];
    while(j <= right)
        tmp[k++] = pr[j++];
    for(int x = left; x <= right; x++)
        pr[x] = tmp[x - left];
}


void mergesort(vector<pair<int,int>> &pr, vector<int> &cnt, int left, int right){
    if(left < right){
        int mid = (right + left)/2;
        mergesort(pr, cnt, left, mid);
        mergesort(pr, cnt, mid+1, right);
        merge(pr, cnt, left, right);
    }
}


vector<int> countSmaller(vector<int>& nums) {
    vector<pair<int,int>> pr;
    int sz = nums.size();
    for(int i = 0; i < sz; i++)
        pr.push_back({nums[i], i});
    vector<int> cnt(sz, 0);
    mergesort(pr, cnt, 0, sz-1);
    return cnt;
}

int main(){
    vector<int> nums = {5,2,6,1};
    vector<int> res = countSmaller(nums);
   for(auto it : res)
       cout << it << " ";
    return 0;
}