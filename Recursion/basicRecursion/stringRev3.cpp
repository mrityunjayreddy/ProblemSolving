#include<iostream>
using namespace std;
void stringRev(string &s,int p,int q){
	if(p >= q)
	return;
	char temp = s[p];
	s[p] = s[q];
	s[q] = temp;
	stringRev( s,p+1,q-1);
}
int main()
{
	string s;
	getline(cin,s);
	int x = 0,y = s.length()-1;
	stringRev(s,x,y);
	cout<<s;
	return 0;
}
