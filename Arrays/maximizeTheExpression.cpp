#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {23,45,-12,3,4,67,-9,6};
	vector<int> prefMax(v.size(),0);
	vector<int> sufMax(v.size(),0);
	int p = 1,q = -2, r = 3;
	prefMax[0] = v[0]*p;
	sufMax[v.size()-1] = v[v.size()-1]*r;
	for(int i = 1;i<v.size();i++){
		prefMax[i] = max(prefMax[i-1],v[i]*p);
	}
	for(int i = v.size()-2;i>=0;i--){
		sufMax[i] = max(sufMax[i+1],v[i]*r);
	}
	int ans = 0;
	for(int i = 1;i<v.size()-1;i++){
		ans = max(ans,prefMax[i]+(v[i]*q)+sufMax[i]);
	}
	cout<<ans<<endl;
	return 0;
}
