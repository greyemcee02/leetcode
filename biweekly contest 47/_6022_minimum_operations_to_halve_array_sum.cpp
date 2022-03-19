#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int halveArray(vector<int>& nums) {
    priority_queue<double> Q;
    long double s = 0;
    for(int i = 0; i < nums.size(); i++){
        Q.push(nums[i]);
        s += nums[i];
    }
    cout << s << endl;
    int res = 0;
    long double sum = 0;
    while(sum < s/2){
        double k = Q.top();
        Q.pop();
        sum += k/2;
        Q.push(k/2);
        res++;
    }
    return res;

}


int main() {
    vector<int> nums= {3, 8, 20};
    cout << halveArray(nums);
    return 0;
}