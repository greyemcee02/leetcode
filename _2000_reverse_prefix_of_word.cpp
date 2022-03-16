#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string reversePrefix(string word, char ch) {
    int i = 0, sz = word.size();
    while(word[i] != ch && i < sz)
        i++;
    if(i < sz)
        for(int j = 0; j <= i/2; j++)
            swap(word[j], word[i-j]);
    return word;
}

int main(){
    string s = "xyxzxe";
    cout << reversePrefix(s, 'a');
    return 0;
}
