#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int partition(vector<int> &arr,int l,int r){
        int i = l+1,j=r;
        while(i<=j){
           while(i<=r && arr[i] <=arr[l])i++;
           while(j>=l && arr[j] >arr[l])j--;
           if(i<j){
           	int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            
		   }
        
    }
    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
        return j;
        
    }
    void quickSort(vector<int> &arr,int l,int r){
        if(l<r){
            int p = partition(arr,l,r);
            quickSort(arr,l,p);
            quickSort(arr,p+1,r);
        }
    
    }
int main()
{
	vector<int> v = {6,1,2,5,4};
	quickSort(v,0,5-1);
	for(auto i: v)
	cout<<i<<" ";
	return 0;
}
