#include<iostream>
#include<vector>
using namespace std;

int pivotSearch(vector<int> v)
{
	int l = 0,r = v.size() - 1;
	int pivot = 0;
	while(l<=r)
	{
		int mid = (r+l)/2;
		if(v[0] < v[v.size()-1])
		{
			pivot = v.size() - 1;
			break;
		}
		else if(v[mid] <= v[v.size()-1])
		r = mid - 1;
		else
		{
			if(v[mid] > v[mid+1])
			{
				pivot = mid;
				break;
			}
			else
			l = mid + 1;
			
		}	
	}
	cout<<pivot;
	
}

int main()
{
	
	vector<int> v = {5,1,2,3,4};

	int x = pivotSearch(v);
	return 0;
}
