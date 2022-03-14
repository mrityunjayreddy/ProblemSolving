#include<iostream>
using namespace std;
string rev(string x,int p,int q){
	if(p>q)
	return "";
	if(p==q)
	return x.substr(p,1);
	return x[q] + rev(x,p+1,q-1) + x[p];
}

bool isPalindrone(string x,int p,int q){
	if(p>=q)
	return 1;
	else if(x[p]!=x[q])
	return 0;
	return isPalindrone(x,p+1,q-1);
}
int main()
{
	string s;
	getline(cin,s);
	bool x = isPalindrone(s,0,s.length()-1);
	cout<<x;
	return 0;
}
