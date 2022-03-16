#include<bits/stdc++.h>
using namespace std;

bool cmp(string s1, string s2){
    return (s1.length() > s2.length());
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> vec;
    sort(strs.begin(), strs.end(), cmp);
    int sz = strs.size();
    vector<int> check(sz, 0);
    int cn = 0;
    for(int i = 0; i < sz; i++){
        if(!check[i]){
            vector<string> vt;
            vt.push_back(strs[i]);
            check[i] = 1;
            for(int j = i + 1; j < sz; j++){
                if(!check[j]){
                    if(strs[j].length() < strs[i].length()) break;
                    else if(strs[j].length() == strs[i].length()) {
                        string s1 = strs[i], s2 = strs[j];
                        int tmp = 0;
                        for(int z = 0; z < s1.length(); z++){
                            tmp = tmp ^ (int)(s1[z]) ^ (int)(s2[z]);
                        }
                        if(tmp == 0){
                            check[j] = 1;
                            vt.push_back(strs[j]);
                        }       
                    }
                }
            } 
            vec.push_back(vt);
        }    
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
    
    return 0;
}
//-3 -2 -1 0 0 1 2 3