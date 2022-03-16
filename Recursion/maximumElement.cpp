#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int>& v,int i,int j){
	if(i>=j)
	return v[j];
	int mid  = (i+j)/2;
	return max(maximum(v,i,mid),maximum(v,mid+1,j));
}
int main()
{
	vector<int> v = {-1,2,3,100,5,6,7,8,9};
	cout<<maximum(v,0,v.size()-1);
	return 0;
}
