#include<bits/stdc++.h>

using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int mx = candies[0];
    for(auto it : candies)
        mx = max(mx,it);
    for(auto it : candies){
        if(it + extraCandies >= mx)
            result.push_back(true);
        else
            result.push_back(false); 
    }
    return result;      
}

int main(){
    vector<int> candies = {2,3,5,1,3};
    int extreCandies = 3;
    vector<bool> result;
    result = kidsWithCandies(candies, extreCandies);
    for(auto it : result)
        cout << it << " ";
    return 0;
}