#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& v,int l,int r)
{
	int i = l+1,j=r;
	while(i<=j)
	{
		while(i<=r && v[i] <= v[l] )i++;
		while(j>=l && v[j] > v[l]) j--;
		if(i<j){
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp; 
		}
	}
	int temp = v[l];
	v[l] = v[j];
	v[j] = temp;
	return j;
}
void quickSort(vector<int> &v,int i,int j)
{
	if(i<j)
	{
		int p = partition(v,i,j);
		quickSort(v,i,p);
		quickSort(v,p+1,j);
	}
} 
int main()
{
	vector<int> v = {6,1,2,5,4};
	quickSort(v,0,5-1);
	for(auto i: v)
	cout<<i<<" ";
	return 0;
}
