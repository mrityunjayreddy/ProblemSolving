#include<iostream>
#include<vector>
using namespace std;


  void merge(vector<int> &arr,int m,int l,int r){
        vector<int> temp(r+1);
        int i = l,e1 = m,j = m+1;
        int c = l;
        while(i <= e1 && j <= r){
            if(arr[i] <= arr[j])temp[c++] = arr[i++];
            else temp[c++] = arr[j++];
        }
      while(i<=e1)temp[c++] = arr[i++];
      while(j<=r)temp[c++] = arr[j++];
      i = l;
      while(i<=r)arr[i] = temp[i++];
    }
    void mergeSort(vector<int> &arr,int l,int r){
        if(l>=r)
        return;
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,m,l,r);
    }

int main()
{
	vector<int> arr = {449, 328 ,474, 150, 709, 467, 329, 936, 440 };
	mergeSort(arr,0,8);
	
	for(int i =0;i<9;i++)
	cout<<arr[i]<<" ";
	return 0;
}
