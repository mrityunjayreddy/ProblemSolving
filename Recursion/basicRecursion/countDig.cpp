#include<iostream>
using namespace std;

int count(int num){
	if(num%10 == num)
	return 1;
	return 1+count(num/10);
}
int main(){
	int n;
	cin>>n;
	cout<<count(n);
	return 0;
}
