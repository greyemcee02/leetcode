#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<int> search1(vector<vector<int>>& intervals, int a){
    int l = 0, r = intervals.size() - 1;
    while(l <= r){
        int mid = (l + r)/2;
        if(a <= intervals[mid][1] && a >= intervals[mid][0]) return {mid,mid};
        else if(a < intervals[mid][0]) r = mid-1;
        else if(a > intervals[mid][1]) l = mid+1;
    }
    return {r, l};
}


vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<int> st = search1(intervals, newInterval[0]);
    vector<int> st2 = search1(intervals, newInterval[1]);
    vector<int> res(2);
    int k, k2;
    if(st[0] == st[1]){
        res[0] = min(newInterval[0], intervals[st[0]][0]);
        k = st[0];//thay dung tai vi tri k
    }
    else{
        if(st[0] == -1){
            res[0] = newInterval[0];
            k = 0;
        }
        else {
            k = st[1];
            res[0] = newInterval[0];
        }
    }
    if(st2[0] == st2[1]){
        res[1] = max(newInterval[1], intervals[st2[1]][1]);
        k2 = st2[1]+1;
    }
    else{
        if(st2[0] == -1){
            res[1] = newInterval[1];
            k2 = 0;
        }
        else {
            k2 = st2[1];
            res[1] = newInterval[1];
        }
    }

    vector<vector<int>> final;
    for(int i = 0; i < k; i++)
        final.push_back(intervals[i]);
    final.push_back(res);
    for(int i = k2 ; i < intervals.size(); i++)
        final.push_back(intervals[i]);
    return final;
}

int main() {
    
    return 0;
}
