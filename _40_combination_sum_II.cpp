#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

  void Try(int i, vector<int>& check, int mx, int target, int sum, vector<vector<int>> &res, vector<int> &save){
    for(int j = i; j <= mx; j++){
        if(check[j] > 0){
            sum += j;
            check[j]--;
            save.push_back(j);
            if(sum == target){
                res.push_back(save);
            }
            else if(sum < target)
                Try(j, check, mx, target, sum, res, save);
            check[j]++;
            sum-=j;
            save.pop_back();
        }
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> save;
    vector<int> check(51, 0);
    int mx = 0;
    for(int i = 0; i < candidates.size(); i++){
        check[candidates[i]]++;
        mx = max(mx, candidates[i]);
    }
    Try(1, check, mx, target, 0, res, save);
    return res;
}

int main() {

    return 0;
}