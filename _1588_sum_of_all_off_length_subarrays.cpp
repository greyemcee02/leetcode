#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    vector<int> prf;
    int sum = 0, sz = arr.size();
    prf.push_back(arr[0]);
    for(int i = 1; i < sz; i++)
        prf.push_back(prf[i-1] + arr[i]);
    for(int i = 0; i < sz; i+=2){
        int x = prf[i];
        sum += x;
        for(int j = i + 1; j < sz; j++){
            x-=arr[j-i-1];
            x+=arr[j];
            sum+=x;
        }
    }    
    return sum;    
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    cout << sumOddLengthSubarrays(arr);
    return 0;
}
