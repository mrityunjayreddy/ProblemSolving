#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int c = 0;
void combinationSum(int s,int i,vector<int>& v){
	if(s==0){
		c++;
		return;
	}
	if(s<0)
	return;
	if(i==v.size())
	return;
	combinationSum(s-v[i],i,v);
	combinationSum(s,i+1,v);	
}

int main()
{
	vector<int> m ={1,2};
	combinationSum(4,0,m);
	cout<<c;
	return 0;
}
