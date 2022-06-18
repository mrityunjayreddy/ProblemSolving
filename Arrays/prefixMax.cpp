#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {-1,-2,3,0,6,2,7};
	vector<int> prefMax(7);
	vector<int> sufMax(7);
	prefMax[0] = v[0];
	for(int i = 1;i<7;i++){
		prefMax[i] = max(prefMax[i-1],v[i]);
	}
	sufMax[6] = v[6];
	for(int i = 7-2;i>=0;i--){
		sufMax[i] = max(sufMax[i+1],v[i]);
	}
	cout<<prefMax[5]<<endl;
	cout<<sufMax[0];
	return 0;
}
