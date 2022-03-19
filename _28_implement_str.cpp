#include<bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
	if(needle.length() == 0) return 0;
	if(haystack.length() < needle.length()) return -1;
	if(haystack.length() == needle.length()){
		if(haystack == needle) return 0;
		return -1;
	}
	for(int i = 0; i < haystack.length() - needle.length(); i++){
		if(haystack[i] == needle[0]){
			int j = 1;
			while( j <  needle.length()){
				if(haystack[j+i] != needle[j]){
					break;
				}
				j++;
			}
			return i;
		}
	}
	return -1;
}

int main() {
	string haystack, needle;
	cin >> haystack >>  needle;
	cout << strStr(haystack, needle);
	return 0;
}
