#include<bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
    int sz = height.size() - 1, res = 0;
    for(int l = 0; l < sz ; l++){
        int r = sz;
        if(height[l]*(r-l) <= res) continue;
        while(l < r){
            if(height[l] < height[r]){
                res = max(res, (r-l)*height[l]);
                break;
            }
            else {
                res = max(res, (r-l)*height[r]);
                if((r-l)*height[r] >= max(res, (r-l-1)*height[l])) break;
                r--;
            }
        }
    }        
    return res;
}

int main(){
    vector<int> height = {1,1};
    cout << maxArea(height);
    return 0;
}