#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string s, string t) {
	if(s.length() != t.length()) return false;
	int checks[26] = {0}, checkt[26] = {0};
	for(char it: s){
		checks[it-'a']++;
	}        
	for(char it: t){
		checkt[it-'a']++;
	}
	for(int i = 0; i < 26; i++)
		if(checks[i]!=checkt[i]) return false;
	return true;
}

int main(){
	cout << isAnagram("rat", "car");
	return 0;
}
