#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
	int begin = 0, end = numbers.size() - 1;
	vector<int> res;
	while(begin < end){
		if(numbers[begin] + numbers[end] == target){
			res.push_back(begin + 1);
			res.push_back(end + 1);
			break;
		}
		else if(numbers[begin] + numbers[end] > target) end--;
		else begin++;
	}        
	return res;
}


int main(){
	vector<int> numbers = {-1, 0};
	vector<int> res = twoSum(numbers, -1);
	for(auto it : res)
		cout << it << " ";
	return 0;
}
