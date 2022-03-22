#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void balanced(string temp,int l,int r,int n,int m,int i){
	cout<<"hello"<<" ";
    if( i == 2*(n+m)){
      cout<<temp<<endl;
        return;
    }

    if(l==r){
        if(l<n)balanced( temp + '(',  l+1,  r,  n,  m,i+1);
        else if(l<n+m) balanced( temp + '{',  l+1,  r,  n,  m,i+1);
    }
    else  if(l>r){
        if(l == n){
        balanced( temp + ')',  l,  r+1,  n,  m,i+1);
        }
        else if(l == n+m) balanced( temp + '}',  l,  r+1,  n,  m,i+1);
        else{
        	
            balanced(temp+'(',l+1,r,n,m,i+1);
            balanced(temp+')',l,r+1,n,m,i+1);
          
            balanced(temp+'{',l+1,r,n,m,i+1);
            balanced(temp+'}',l,r+1,n,m,i+1);
        }
    }
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    balanced("", 0, 0,  n,  m,0);
    return 0;
}
