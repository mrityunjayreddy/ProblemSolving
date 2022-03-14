#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	unordered_map<char,int> map;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1.length()!=s2.length())
	cout<<"Not anagram";
	map.resize(s1.length(),0));
	for(int i =0;i<s1.length();i++)
	{
		map[s1[i]]++;
	}
	int flag = 0;
	for(int i =0;i<s2.length();i++)
	{
		if(map.find(s2[i]))
		map[s2[i]]--;
    }
	
	for(int i = 0;i<s1.length();i++)
	{
		if(map[s1[i]] == 0)
		flag = 1;
		else{
			flag = 0;
			break;
		}
	}
	
	if(flag)
	cout<<"Anagram";
	else
	cout<<"Not anagram";
	return 0;
}
