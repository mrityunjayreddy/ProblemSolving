#include<iostream>
using namespace std;
int revNum(int n,int rev = 0){
	if(n == 0 )
	return rev;
	return revNum(n/10,rev*10+n%10);
}
int main()
{
	int x = revNum(12345);
	cout<<x;
	return 0;
}
