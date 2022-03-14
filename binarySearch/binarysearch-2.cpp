#include<iostream>
#include<vector>
using namespace std;

int check(int x,vector<int> v)
{
	int mid =0, l = 0,r = v.size();
	int flag = 0;
	while(l<=r)
	{
		mid = (r+l)/2;
		if(x == v[mid])
		{
			flag = 1;
			break;
		}
		else if( x < v[mid])
		r = mid - 1;
		else
		l = mid + 1;
	}
	if(flag == 0 && x<v[mid])
	mid = mid + 1;
	else if(flag == 0 && x>v[mid])
	mid = mid - 1;
	
	return mid;
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
