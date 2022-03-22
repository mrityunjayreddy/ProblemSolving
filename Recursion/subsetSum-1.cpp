#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int c = 0;
void subsetSum1(int i,int s,vector<int>& arr){
	if(i == arr.size()){
		if(s == 0)
		c = c + 1;
		return;
	}
	subsetSum1(i+1,s-arr[i],arr);
	subsetSum1(i+1,s,arr);
}

int subsetSum2(int i,int s,vector<int>& arr){
	if(i==arr.size())
	return s==0;
	return subsetSum2(i+1,s-arr[i],arr) + subsetSum2(i+1,s,arr);
}
int main(){
	vector<int>  v= {1,2,3};
	
	cout<<subsetSum2(0,3,v);;
	return 0;
}
