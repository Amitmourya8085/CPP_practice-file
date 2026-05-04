#include<iostream>
using namespace std;
int max_element(int *arr,int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	
	{
		if(arr[i]>max)
		{
			   max=arr[i];
	    }
	}
	return max;
}
int main()
{
		int arr[6]={45,3,5,2,3,99};
		int size=sizeof(arr)/sizeof(arr[0]);
	
		cout<<"\n max="<<max_element(arr,size);	
        return 0;
}		