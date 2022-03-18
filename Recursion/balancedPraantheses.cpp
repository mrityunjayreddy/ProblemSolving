#include<iostream>
#include<bits/stdc++.h>;
using namespace std;

void generate(vector<char> &temp,int l,int r,int i,int n){
	if(i == 2*n){
		for(int j = 0;j<2*n;j++)
		cout<<temp[j];
		cout<<endl;
		return;
	}
	if(l==r){
		temp[i] = '(';
		generate(temp,l+1,r,i+1,n);
	}
	else if(l>r){
		if(l==n){
			temp[i] = ')';
			generate(temp,l,r+1,i+1,n);
		}
		else{
			temp[i] = '(';
			generate(temp,l+1,r,i+1,n);
			temp[i] = ')';
			generate(temp,l,r+1,i+1,n);
		}
	}
}
int main()
{
	vector<char> v(6);
	generate(v,0,0,0,3);
	return 0;
}
