#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sextupletCount(vector<int> v)
{
	vector<int> lhs;
	vector<int> rhs;
	for(int i = 0;i<v.size();i++)
	for(int j= 0;j<v.size();j++)
	for(int k=0;k<v.size();k++)
	{
		int x = v[i]*v[j]+v[k];
		cout<<x<<" ";
		lhs.push_back(x);
	}
	cout<<endl;
	for(int i = 0;i<v.size();i++)
	for(int j= 0;j<v.size();j++)
	for(int k=0;k<v.size();k++)
	{
		if(v[i]!=0)
		{
			int x = v[i]*(v[j]+v[k]);
			cout<<x<<" ";
		    rhs.push_back(x);
		}	
	}
	
	vector<int> freq(1000,0);
	for(int i = 0;i<lhs.size();i++)
	{
		freq[lhs[i]]++;
	}
	int count = 0;
	for(int i = 0;i<rhs.size();i++)
	{
		if(freq[rhs[i]]>0)
		 count = count + freq[rhs[i]];
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<"The maximum sextuplets are : "<<sextupletCount(v);
	return 0;
}
