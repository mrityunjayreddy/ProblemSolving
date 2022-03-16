#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string generate(int i){
	if(i%2 == i){
		return to_string(i);
	}
	return  generate(i/2) + to_string(i%2);	 
	
}
int main()
{
	vector<int> v ={1,2,3};
	vector<string> bitmask;
	vector<int> ans;
    for(int i = 0;i<pow(2,v.size());i++){
    	string s = generate(i);
    	bitmask.push_back(s);
	}
	for(auto x:bitmask)
	cout<<x<<endl;
	return 0;
}
