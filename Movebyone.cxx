#include<iostream>
using namespace std;

int Movby_one(int *arr,int n)
{
	int index=0;
	int first=arr[0];
	for(int i=1;i<n-1;i++)
	{
		arr[index]=arr[i];
		index++;
		
	}
	arr[index-1]=arr[0];
	
	
	return 0;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size =sizeof(arr)/sizeof(arr[0]);
	Movby_one(arr,size);
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}