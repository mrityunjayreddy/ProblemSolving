#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumArray(vector<int>& v,int i,int j){
	if(i==j)
	return v[j];
	int mid = (i+j)/2;
	return sumArray(v,i,mid) + sumArray(v,mid+1,j);
}
int main(){
	vector<int> arr = {1,2,3};
	cout<<sumArray(arr,0,2);
	return 0;
}
