#include <iostream>
#include<vector>
using namespace std;
int repeat(vector<int> v)
{
	int l = 0,r = v.size()-1;
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(mid!=v.size()-1 && v[mid]==v[mid+1]   )
			return v[mid];
		else if(mid!=0  && v[mid]==v[mid-1] )
			return v[mid];
		else if(v[mid] == mid + 1)
			l = mid + 1;
		else 
			r = mid -1;	
	}
}
int main() {
    // your code goes here
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<repeat(v)<<endl;
    return 0;
}
