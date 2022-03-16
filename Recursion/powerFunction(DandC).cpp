#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powfunc(int x, int n){
	if(n==0)
	return 1;
	double y = powfunc( x,n/2);
	y = y*y;
	if(n&1) y = y*x;
	return y;
}
int main()
{
	int x = powfunc(2,5);
	cout<<x;
	return 0;
}
