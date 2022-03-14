#include<iostream>
using namespace std;
string stringRev(string s,int i){
	if(i == s.length())
	return "";
	return stringRev(s,i+1) + s[i];
}

int main()
{
	string s;
	getline(cin,s);
	cout<<stringRev(s,0); 
	return 0;
}
