#include<iostream>
using namespace std;
void rev(string s,int i){
	if(i == s.length()){
		return;
	}
	rev(s,i+1);
	cout<<s[i];

}
int main()
{
	string s;
	getline(cin,s);
	rev(s,0);
	return 0;
}
