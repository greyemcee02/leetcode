#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(vector<int> A, vector<int> B){
    if(A[0] < B[0]) return true;
    if(A[0] == B[0]){
        if(A[1] < B[1]) return true;
    }
    return false;
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), cmp);
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i][0] > res[res.size()-1][1]) res.push_back(intervals[i]);
        else{
            res[res.size()-1][1] = max(intervals[i][1], res[res.size()-1][1]);
        }
    }
    return res;
}

int main() {
    vector<vector<int>> intervals;
    int n;
    cin >> n;
    for(int i = 0; i  < n; i++){
        int t1, t2;
        cin >> t1 >> t2;
        intervals.push_back({t1, t2});
    }
    vector<vector<int>> res = merge(intervals);
    for(auto it : res){
        for(auto i : it)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
