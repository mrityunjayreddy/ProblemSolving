#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void subsets(vector<int>& temp,int sz,vector<int>& v,int i){
	if(i==v.size()){
		vector<int> t;
		for(int i = 0;i<sz;i++)
		t.push_back(temp[i]);
		ans.push_back(t);
		return;
	}
	temp[sz] = v[i];
	subsets(temp,sz+1,v,i+1);
	subsets(temp,sz,v,i+1);
}
int main(){
	vector<int> v ={1,2,3};
	vector<int> temp(3);
	subsets(temp,0,v,0);
	for(auto x:ans){
		for(auto i:x){
		cout<<i<<" ";
	}
	cout<<endl;
	}
	
	return 0;
}
