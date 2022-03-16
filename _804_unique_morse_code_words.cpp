#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<string> str = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

int uniqueMorseRepresentations(vector<string>& words) {
    int cnt = 0;
    string s;
    set<string> st;
    for(int i = 0 ; i < words.size(); i++){
        s = "";
        for(int j = 0; j < words[i].length(); j++)
            s += str[words[i][j] - 'a'];
        st.insert(s);
    }
    return st.size();
}

int main(){
    vector<string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words);
    return 0;
}
