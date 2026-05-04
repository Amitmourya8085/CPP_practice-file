#include<iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    // 0 or 1 element is always sorted
    if(n <= 1)
        return true;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, n))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}