#include <iostream>
#include<vector>
using namespace std;
vector<int> check(int x,vector<int> v)
{
	int mid =0, l = 0,r = v.size() -1;
	vector<int> temp(2,-1);
	int flag = -1;
	int count = 0;
	while(l<=r)
	{
		mid = (r+l)/2;
		if(x == v[mid])
		{
			if(flag == -1)
			flag = mid;
			count ++;
		}
		else if( x < v[mid])
		r = mid - 1;
		else
		l = mid + 1;
	}
	
	if(flag > 0)
	{
		if(v[flag + count ] == x)
		{temp[0] = flag;
		         temp[1] = flag + count;}
		else if(v[flag - count] == x)
			{temp[0] = flag-1;
		         temp[1] = flag ;}
		else
		{
			temp[0] = flag-count;
			temp[1] = flag+count;
		}
 	}
	
	return temp;
	
}
int main() {
    // your code goes here
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
		vector<int> temp = check(x,v);
		if(temp[0] !=-1)
		{
			cout<<temp[0]<<" "<<temp[1]<<endl;
		}
		else
		{
			cout<<temp[0]<<endl;
		}
		
	}
    return 0;
}
