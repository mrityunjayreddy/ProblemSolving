#include<iostream>
#include<vector>
using namespace std;
int findPeakElement(vector<int>& v) {
        
        int l = 0,r = v.size() - 1;
        if(l==r)
            return 0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(mid == 0 && v[mid] > v[mid+1])
                return mid;
            else if(mid == v.size()-1 && v[mid] > v[mid-1])
                return mid; 
            else if(v[mid] > v[mid + 1] && v[mid] > v[mid-1])
            {
                return mid;
            }
            else if(v[mid] < v[mid+1])
                l = mid+1;
            else
                r = mid - 1;
        }
        
        return 1;
        
    }
