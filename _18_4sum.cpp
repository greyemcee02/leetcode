#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> vec;
    vector<int> vt(4,0);
    int sz = nums.size();
    for(int p1 = 0; p1 < sz - 3; p1++){
        if(p1 > 0 && nums[p1] == nums[p1-1]) continue;
        for(int p2 = p1 + 1; p2 < sz - 2; p2++){
            if(p2 > p1 + 1 && nums[p2] == nums[p2-1]) continue;
            if(nums[p1] + nums[p2] > target && target > 0) break;
            for(int p3 = p2 + 1; p3 < sz - 1; p3++){
                if(p3 > p2 + 1 && nums[p3] == nums[p3-1]  ) continue;
                if((long long)nums[p3] + nums[p2] + nums[p1] > target && target > 0) break;
                for(int p4 = p3 + 1; p4 < sz ; p4++){
                    if(p4 > p3+1 && nums[p4] == nums[p4-1] ) continue;
                    long long s = (long long)nums[p4] + nums[p3] + nums[p1] + nums[p2];
                    if(s == target){
                        vt[0] = nums[p1];
                        vt[1] = nums[p2];
                        vt[2] = nums[p3];
                        vt[3] = nums[p4];
                        vec.push_back(vt);
                    }
                    else if(s > target) break;
                    
                }
            }
        }
    }
    return vec;
}

int main(){
    vector<int> nums = {1000000000,1000000000,1000000000,1000000000};
    vector<vector<int>> res = fourSum(nums, 0);
    for(int i = 0; i < res.size(); i++){
        for(auto it : res[i])
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
//-3 -2 -1 0 0 1 2 3