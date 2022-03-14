#include <iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> sol(vector<int> & v,int n)
{
	vector<int> sd;
	
	map<int,vector<int>> m;
	
	for(int i = 0;i<n;i++)
	{
		if(m.find(v[i]) != m.end())
		{
			m.find(v[i])->second.push_back(i);	
		}
		else
		{
			vector<int> t;
			t.push_back(i);
			m.insert(pair<int,vector<int>>(v[i],t));
		}
	}
	
	
	return sd;
		
}
int main() {
    // your code goes here
	vector<int> v;
	int n,m;
	cin>>n>>m;
	for(int i = 0;i<n;i++)
	{
		int count = 0;
		for(int j = 0;j<m;j++)
		{
			int x;
			cin>>x;
			count+=x;
		
		}
		v.push_back(count);
	}
	vector<int> t = sol(v,n);

	
    return 0;
}
