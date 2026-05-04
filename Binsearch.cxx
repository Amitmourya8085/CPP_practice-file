#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
	public:
	int bin_search(vector<int>&nums,int target){
	  
	  int low=0;
	  int high=nums.size()-1;
	  while(low<=high){
	    int mid=low+(high-low)/2;
	    if(nums[mid]==target){
	      return mid;
	    }
	    else if(nums[mid]<target){
	    	low=mid+1;
	    }
	    else
	    {high=mid-1;}
	  }
	return low;
	}
};

int main()
{
	vector <int>nums={1,2,3,4,5};
	int target =5;

	solution s1;
	cout<<s1.bin_search(nums,target);
	return 0;
}