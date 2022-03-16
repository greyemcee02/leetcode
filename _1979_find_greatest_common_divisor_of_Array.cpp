#include<bits/stdc++.h>

using namespace std;

void findMinMax(vector<int>& nums, int &mn, int &mx){
	mn = mx = nums[0];
	for(auto it : nums){
		if(mn > it) mn = it;
		if(mx < it) mx = it;
	}   
}

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

int findGCD(vector<int>& nums) {
	int mn, mx;
	findMinMax(nums, mn, mx);
	return gcd(mn, mx);     
}

int main(){
	vector<int> nums = {7,5,6,8,3};
	cout << findGCD(nums);
	return 0;
}
