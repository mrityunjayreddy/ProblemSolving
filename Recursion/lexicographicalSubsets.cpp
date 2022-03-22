#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void lexicographicalSubsets(vector<int> temp,int sz,int i,vector<int>& v){
	for(int k = 0;k<sz;k++)
	cout<<temp[k]<<" ";
	cout<<endl;
	if(i == v.size())
		return;
	for(int j = i;j<v.size();j++){
		temp[sz] = v[j];
		lexicographicalSubsets(temp,sz+1,j+1,v);
	}

}
int main(){
	vector<int> v = {1,2,3};
	vector<int> temp(3);
	lexicographicalSubsets(temp,0,0,v);
		return 0;
}
