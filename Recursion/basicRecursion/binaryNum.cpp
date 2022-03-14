#include<iostream>
using namespace std;
void binaryNum(int n){
    if(n == 0)
    return;
    binaryNum(n>>1);
    cout<<(n&1);
}
int main(){
	int x;
	cin>>x;
	binaryNum(x);
	return 0;
}
