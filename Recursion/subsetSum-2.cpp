#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> temp, int sz,int i,int sum,vector<int>& v){
	if(sum == 0){
		for(int j = 0;j<sz;j++)
		cout<<temp[j]<<" ";
		cout<<endl;
		return;
	}
	for(int j = i;j<v.size();j++){
		if(sum>0){
			temp[sz] = v[j];
			subsetSum(temp,sz+1,i,sum-v[j],v);
		}
		else{
			temp[sz] = v[j];
			subsetSum(temp,sz+1,j+1,sum-v[j],v);
		}
	}
}
int main(){
	vector<int> v = {1,2};
	vector<int> temp(4);
	subsetSum(temp,0,0,4,v);
	return 0;
}
