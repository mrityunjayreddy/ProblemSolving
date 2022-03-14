#include<iostream>
#include<vector>
using namespace std;

int check(int x,vector<int> v)
{
	int  l = 0,r = v.size()-1;
	int flag = -1;
	while(l<=r)
	{
		int mid = (r+l)/2;
		if(x == v[mid])
		{
			flag = mid;
			break;
		}
		else if( x < v[mid])
		r = mid - 1;
		else
		l = mid + 1;
	}
	if(flag < 0 && x<v[l])
	flag = l  ;
	else if(flag < 0 && x>v[r])
	flag = r  + 1;
	
	return flag;
}
int main()
{
	int n,t,x;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin>>v[i];
	}
	cin>>t;
	for(int i = 0;i < t;i++)
	{
		cin>>x;
		int check_var = check(x,v);
		cout<<check_var<<endl;
		
	}
	return 0;
}
