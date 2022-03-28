#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsets(vector<int> temp,int sz,int i,vector<int>& v){
	for(int j = 0;j<sz;j++){
		cout<<temp[j]<<" ";
	}
	cout<<endl;
	if(i == v.size())
	return;
	for(int j = i;j<v.size();j++){
		temp[sz] = v[j];
		subsets(temp,sz+1,j+1,v);
	}		
}

int main()
{
	vector<int> v = {1,2,3};
	vector<int> temp(3);
	subsets(temp,0,0,v);
	return 0;
}
