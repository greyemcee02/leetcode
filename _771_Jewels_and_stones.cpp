#include<bits/stdc++.h>

using namespace std;
int numJewelsInStones(string jewels, string stones) {
    int num[200] = {0}, cnt = 0;
    for(int i = 0; i < jewels.length(); i++)
        num[jewels[i]] = 1;
    for(int i = 0; i < stones.length(); i++)
        if(num[stones[i]]) cnt++;
    return cnt;  
}

int main(){
    string jewels = "z";
    string stones = "ZZ";
    cout << numJewelsInStones(jewels, stones);
    return 0;
}