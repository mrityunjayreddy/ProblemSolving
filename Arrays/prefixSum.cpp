#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5};
	vector<int> prefSum(5);
	vector<int> sufSum(5);
	int sum = 0;
	for(int i = 0;i<5;i++){
		sum = sum + v[i];
		prefSum[i] = sum;
	}
	sum = 0;
	for(int i = 4;i>=0;i--){
		sum = sum + v[i];
		sufSum[i] = sum;
	}
	cout<<prefSum[4]<<endl;
	cout<<sufSum[0]<<endl;
	return 0;
}

