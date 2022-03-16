#include<bits/stdc++.h>

using namespace std;

int largestAltitude(vector<int>& gain) {
    int mx = 0;
    vector<int> res;
    res.push_back(0);
    for(auto it : gain){
        int x = it + *res.rbegin();
        mx = max(mx, x);
        res.push_back(x);
    }        
    return mx;
}

int main(){
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    cout << largestAltitude(gain);
    return 0;
}