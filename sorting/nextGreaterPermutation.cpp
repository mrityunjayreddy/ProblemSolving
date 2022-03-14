#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> v){
        int p1 = v.size()-1;
        while(p1>0 && v[p1]<v[p1-1])
            p1--;
        int pivot = v[p1-1];
        int p2 = v.size()-1;
        while(pivot > v[p2] )
            p2--;
        
        int temp = v[p1-1];
        v[p1-1] = v[p2];
        v[p2] = temp;
        
        p2 = v.size()-1;
        while(p1 < p2){
            int temp = v[p2];
            v[p2] = v[p1];
            v[p1] = temp; 
            p1++;
            p2--;
        }
    return v;
}

int main(){
	vector<int> v ={1,2,3,4};
	vector<int> ans = v;
	for(int i = 0;i<8;i++)
	{
	ans = nextPermutation(ans);
	for(auto x : ans)
	cout<<x<<" ";
	cout<<endl;
	}
	
	return 0;
}

