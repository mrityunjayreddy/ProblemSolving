#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(string s,int n)
{
	vector<int> freq(256,0);
	int count = 0;
	int e = 0,st = 0;
	for(int i = 0;i<s.length();i++)
	{
		freq[s[i]]++;
		if(freq[49] == n){st = 0,e= i;
		break;
		}
	}
	
	while(st < s.length())
	{
		while(e<s.length() && freq[49] <= n ){ if(freq[49]==n)count++;
			freq[s[e]]++;
			e++;
			
		}
		freq[s[st]]--;
		st++;
	}
	return count;
}

int main()
{
	string s;
	getline(cin,s);
	cout<<count(s,1);
	return 0;
}
