#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int manhattanDistance(vector<pair<int,int>> v)
{
	int i = 0;
	vector<int> x;
	vector<int> y;
	int xSum =0,ySum=0;
	for(int i = 0;i<v.size();i++)
	{
		xSum+=v[i].first;
		ySum+=v[i].second;
		x.push_back(v[i].first);
		y.push_back(v[i].second);
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	int xDiffSum = 0,yDiffSum = 0;
	for(int i = 0;i<v.size();i++)
	{
		xSum = xSum - x[i];
		xDiffSum += xSum - (v.size()-(i+1))*x[i];
		
		ySum = ySum - y[i];
		yDiffSum += ySum - (v.size()-(i+1))*y[i];
	}
	return xDiffSum + yDiffSum;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	for(int i = 0;i<n;i++)
	{
		int x,y;
		cin>>x;
		v[i].first = x;
		cin>>y;
		v[i].second = y;
	}
	cout<<"Manhattan Distance is : "<<manhattanDistance(v);
	return 0;
}
