#include<bits/stdc++.h>
using namespace std;



vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<string> s(strs.begin(), strs.end());
    unordered_map<string, vector<string> > mp;
    vector<vector<string>> vec;
    for(int i = 0; i < strs.size(); i++){
        sort(s[i].begin(), s[i].end());
    }       
    for(int i = 0; i < s.size(); i++){
        mp[s[i]].push_back(strs[i]);
    }
    for(auto it:mp){
        vec.push_back(it.second);
    }
    return vec;
}

int main(){
   vector<string> vec = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res = groupAnagrams(vec);
    //cout << res.size();
    for(int i = 0; i < res.size(); i++){
        for(string it : res[i])
            cout << it << " ";
        cout << endl;
    }
    
}
//-3 -2 -1 0 0 1 2 3