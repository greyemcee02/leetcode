#include<bits/stdc++.h>

using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int sz = cost.size();
    for(int i = 2; i < sz; i++)
        cost[i] += min(cost[i-1], cost[i-2]);
    return min(cost[sz- 1], cost[sz - 2]);
}

int main(){
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    cout << minCostClimbingStairs(cost);
    return 0;
}