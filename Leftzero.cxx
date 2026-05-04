#include<iostream>
using namespace std;
int move_zero(int *arr,int n)
{
	 int index=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(arr[i]!=0)
	 	{
	 		arr[index]=arr[i];
	 		index++;
	 	}
	 }
	 	
	 	for(int i=index;i<n;i++)
	 	arr[i]=0;
	 	return 0;
}
int main()
{
	int arr[5]={1,0,2,0,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	move_zero(arr,size);
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}	