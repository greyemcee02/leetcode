#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> vt;
vector<int> candidates;
vector<vector<int>> res;
int target;
void Try(int i, int s){
    for(int j = vt[i-1]; j < candidates.size(); j++){
        if(s+candidates[j] <= target){
            vt.push_back(j);
            s+=candidates[j];
            if(s == target){
                vector<int> tmp;
                for(int k = 1; k <= candidates.size(); k++)
                    tmp.push_back(candidates[vt[k]]);
                res.push_back(tmp);
            }
            else Try(i+1, s);
            s-=candidates[j];
            if(!vt.empty())
            vt.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vt.push_back(0);
    Try(1, 0);
    return res;
}

int main(){

    return 0;
}