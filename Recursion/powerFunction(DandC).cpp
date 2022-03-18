#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int powfunc(int x, int n){
	if(n==0)
	return 1;
    double y = powfunc(x,n/2);
    if(n%2==0)
    return y*y;
    return y*y*x;
    
}
int main()
{
	int x = powfunc(2,4);
	cout<<x;
	return 0;
}
