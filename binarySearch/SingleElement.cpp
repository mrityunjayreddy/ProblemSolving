#include <iostream>
#include<vector>
using namespace std;

int check(vector<int> v)
{
	int l = 0,r = v.size()-1;
	while(l<=r)
	{
		int mid = (r+l)/2;
		mid += mid%2;
		if(v[mid]!=v[mid+1]  && v[mid]!=v[mid-1])
			return v[mid];
		else if ( mid!=v.size()-1 && v[mid] == v[mid+1]   )
			l = mid+1;
		else
			r = mid-1;
	}
}
int main() {
    // your code goes here
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i =0 ;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<check(v);
    return 0;
}
