#include<iostream>
using namespace std;
int secondLargest(int *arr, int n)
{
    if(n < 2)
        return -1;

    int max = arr[0];

    // first pass: find max
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int secmax = -1;

    // second pass: find largest < max
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != max)
        {
            if(secmax == -1 || arr[i] > secmax)
                secmax = arr[i];
        }
    }

    return secmax;
}
/*int secondLargest(int *arr, int n)
{
    int max=arr[0];
    int secmax=arr[0];
    int index=0;
    for(int i=1;i<n;i++)
    {
    		if(max<arr[i])
    		{
    			max=arr[i];
    			index=i;
    		}
    }
          
          for(int i=1;i<n;i++)
          {
          	if(arr[i]!=arr[index])
          	{
          	    if(secmax<arr[i])
          	    secmax=arr[i] ;
          	 }  
          }
          	 int ans=secmax;
          	 return ans;          	    
          	    
}*/    
    	
int main()
{
    int arr[] = {10, 5, 20, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = secondLargest(arr, n);

    if(ans == -1)
        cout << "No second largest";
    else
        cout << ans;

    return 0;
}