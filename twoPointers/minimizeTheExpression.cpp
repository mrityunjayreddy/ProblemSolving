#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximize(vector<int> v1,vector<int> v2,vector<int> v3){
	int p1 = 0,p2 = 0,p3 =0;
	int ans = INT_MAX;
	while(p1<v1.size() && p2<v2.size() && p3<v3.size()){
		int val = max(v1[p1],max(v2[p2],v3[p3])) - min(v1[p1],min(v2[p2],v3[p3]));
		ans = min(ans,val);
		int min_val = min(v1[p1],min(v2[p2],v3[p3]));
		if(v1[p1] == min_val)p1++;
		else if(v2[p2] == min_val)p2++;
		else p3++;
	}
	return ans;
}
int main()
{
	vector<int> v1 = {1,4,5,8,10};
	vector<int> v2 = {6,9,15};
	vector<int> v3 = {2,3,6,6};
	int ans = maximize(v1,v2,v3);
	cout<<"The minimized value : "<<maximize(v1,v2,v3);
	return 0;
}
