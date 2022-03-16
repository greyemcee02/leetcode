#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int pcmx = 0, mn = prices[0];
    for(int i = 1; i < prices.size(); i++){
        pcmx = max(pcmx, prices[i] - mn);
        mn = min(mn, prices[i]);
    }        
    return pcmx;
}

int main(){
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices);
    return 0;
}