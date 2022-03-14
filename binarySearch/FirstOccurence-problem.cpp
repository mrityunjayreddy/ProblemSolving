#include<iostream>
#include<vector>
using namespace std;

int check(int x,vector<int> v)
{
	vector<int> temp(2,-1);
	int  l = 0,r = v.size()-1;
	int flag1 = -1;
	while(l<=r)
	{
		int mid = (r+l)/2;
		if(x == v[mid])
		{
			if(mid == 0)
			{
				flag1 = mid;
				break;
			}
			else if(x!=v[mid - 1])
			{
				flag1 = mid;
				break;
			}
			else if(x == v[mid-1])
			r = mid-1;
		}
		else if( x < v[mid])
		r = mid - 1;
		else
		l = mid + 1;
	}
	
	return flag1;
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
		int temp  = check(x,v);
		cout<<temp<<endl;
	}
	return 0;
}
