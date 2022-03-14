#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int>& v1, vector<int>& v2) {
      sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end());
      
       vector<int> temp;
       int p1 = 0, p2 = 0;
        while(p1<v1.size() && p2<v2.size())
        {
            if(v1[p1] < v2[p2] )
            {
                int ch = v1[p1];
                while(ch == v1[p1])p1++;
            }
                
            else if(v2[p2] < v1[p1])
            {
                int ch = v2[p2];
                while(ch == v2[p2])p2++;
            }
            else
            {
                temp.push_back(v1[p1]);
                int ch1 = v1[p1];
                while(ch1 == v1[p1])p1++;
                
                int ch2 = v2[p2];
                while(ch2 == v2[p2])p2++;
            }
        }
        
        return temp;
        
    }
    
int main()
{
	vector<int> temp;
	vector<int> v1 = {1,2,2,1};
	vector<int> v2 = {2,2};
	temp = intersection(v1,v2);
	for(int i : temp)
	{
		cout<<i<<" ";
	}
	return 0;
}
