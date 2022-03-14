#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(int x,vector<int> v)
{
	int mid = 0,l = 0,r=v.size();
	int flag = 0;
	while(l<r)
	{

		mid = (r-l)/2;
		if(x == v[mid])
		{
			flag = 1;
			break;
		}
		else if(x > v[mid])
		{
			l = mid+1 ;
		}
		else if(x < v[mid])
		{
		     r = mid-1 ;
		}
		
	}

	return mid;
	
}

