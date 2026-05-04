#include<iostream>
#include<vector>
using namespace std;
int main()
{	
	vector<int> nums={1,1,2,2,1, 2,2};
	
	int f=0;
	int ans=0;
	for(int i=0;i<nums.size();i++){
		if(f==0){
			ans=nums[i];
		}
		if(ans==nums[i])
		f++;
		else
		f--;
	}
	int count=0;
	for(int i=0;i<nums.size();i++)
	{if(ans==nums[i])
	   count++;} 
	if(count==(nums. size() /2)){
		 cout<<ans;
	}
	else{
		cout<<"0";
		}


}