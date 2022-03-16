#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int cnt = 0, sz = arr.size();
    for(int i = 0; i < sz - 2; i++){
        for(int j = i + 1; j < sz - 1; j++){
            if(abs(arr[i] - arr[j]) <= a)
            for(int z = j + 1; z < sz; z++)
                if(abs(arr[j]-arr[z]) <= b && abs(arr[i] - arr[z]) <= c)
                    cnt++;
        }
    }
    return cnt;
}

int main(){
    vector<int> arr = {3,0,1,1,9,7};
    cout << countGoodTriplets(arr, 7, 2, 3);
    return 0;
}
