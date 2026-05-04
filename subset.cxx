#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void get_subset(vector<int>&nums,int i,vector<int>&temp){

	if(i==nums.size()){
		for(int x:temp){
			cout<<x;
		}
		cout<<endl;
		return ;
	}
		temp.push_back(nums[i]);
		get_subset(nums,i+1,temp);
		
		temp.pop_back();
		get_subset(nums,i+1,temp);
}

void subset(vector<int>&nums){
	vector<int>temp;
	get_subset(nums,0,temp);
}
int main(){

	vector<int>nums={1,2,3};
	subset(nums);
	return 0;
}