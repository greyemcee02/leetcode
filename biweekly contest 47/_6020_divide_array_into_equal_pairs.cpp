#include<iostream>

#include<vector>
using namespace std;

bool divideArray(vector<int>& nums) {
    vector<int> count(501, 0);
    for(auto it : nums)
        count[it]++;
    for(auto it : count){
        if(it% 2!=0)
            return false;
    }
    return true;
}

int main() {

    return 0;
}