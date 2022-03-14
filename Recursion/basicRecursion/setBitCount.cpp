#include<iostream>
using namespace std;
int setBitcount(int n){
	if(!n)
	return 0;
	return 1 + setBitcount(n&(n-1));
}
int main(){
	int x;
	cin>>x;
	cout<<setBitcount(x);
	return 0;
}
