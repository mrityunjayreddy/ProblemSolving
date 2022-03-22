#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<string> combinations;
void letterCombinations(string temp,string &digits,int i,vector<vector<char>>& digitMap){
	if(i == digits.length()){
		combinations.push_back(temp);
		return;
	}
	for(int j = 0;j<digitMap[digits[i]-'2'].size();j++)
	letterCombinations(temp + digitMap[digits[i]-'2'][j],digits,i+1,digitMap);
}
int main(){
	vector<vector<char>> digitMap(8);
	digitMap[0] = {'a','b','c'};
	digitMap[1] = {'d','e','f'};
	digitMap[2] = {'g','h','i'};
	digitMap[3] = {'j','k','l'};
	digitMap[4] = {'m','n','o'};
	digitMap[5] = {'p','q','r','s'};
	digitMap[6] = {'t','u','v'};
	digitMap[7] = {'w','x','y','z'};
	string digits = "23";
	letterCombinations("",digits,0,digitMap);
	
	for(auto x:combinations){
		for(auto y : x)
		cout<<y<<" ";
		cout<<endl;
	}
	
	
	return 0;
}
