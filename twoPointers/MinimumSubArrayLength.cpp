 #include<iostream>
 #include<vector>
 using namespace std;
 
 int minSubArrayLen(int target, vector<int> nums) {
        int f = 0 ,r = 0;
        int sum = 0,minn=nums.size()+1;
      
        while(f < nums.size()  || r < nums.size() )
        {
            if(sum == target)
            {
                int temp = r - f;
                minn = min(minn,temp);
                sum = sum - nums[f];
                f++;
                cout<<temp<<endl;            }
            
            else if(sum < target && r < nums.size())
            {
                sum = sum + nums[r];
                r++;
            }
            else if(sum < target && f<nums.size())
            f++;
            else if(sum > target)
            {
                int temp = r - f;
                minn = min(minn,temp);
                sum = sum - nums[f];
                f++;
                cout<<temp<<endl;
            }
            
        }
        
        if(minn == nums.size() + 1)
            return 0;
        return minn;
    }
    
int main()
{
	vector<int> v = {1,1,1,1,7};
	int target = 7;
	cout<<minSubArrayLen(target,v);
	
	return 0;
}
