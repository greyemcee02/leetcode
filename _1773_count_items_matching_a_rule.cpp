#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int pos, cnt = 0;
    if(ruleKey == "type") pos = 0;
    else if(ruleKey == "color") pos = 1;
    else pos = 2;
    for(int i = 0; i < items.size(); i++)
        if(items[i][pos] == ruleValue) 
            cnt++;
    return cnt;
}


int main(){
    vector<vector<string>> vt({{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}});
    cout << countMatches(vt, "color", "silver");
    return 0;
}