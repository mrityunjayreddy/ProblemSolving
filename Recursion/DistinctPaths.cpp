#include<iostream>
using namespace std;
int count(int i,int j){
	if(i==0 || j==0)
	return 1;
	return count(i-1,j) + (i,j-1);
}
int main()
{
	int c = count(100,100);
	cout<<c;
	return 0;
}
