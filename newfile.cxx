#include<iostream>
using namespace std;
int data_reverse(int *arr,int n)
{
	    int *left =arr;
	    int  *right=arr+(n-1);
	    
	    while(left<right)
	    {
	    	int temp=*right;
	    	*right=*left;
	    	*left=temp;
	    	left++;
	    	right--;
	    }
	    return 0;
	    
 
 }
int main()
{
	int  og_arr[6]={1,2,3,4,5,6};
	int size= sizeof(og_arr)/sizeof(og_arr[0]);
	
	 data_reverse(og_arr,size);
	 int rev_arr[];
	 for(int i=0;i<size;i++)
	 {
	  cout<<og_arr[i]<<" ";
	  rev_arr[]=og_arr[i];
	  }
	  
	  if(rev_arr==og_arr)
	 {   
	  cout<<"\nreversed succesfully.........";
	 }
	  else
	 {
	  	cout<<"\n not reversed........";
	  }
	  return 0;
}	  	  