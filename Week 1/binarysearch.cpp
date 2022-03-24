//iterative
#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key)
{
    while(left<=right)
    {
        int mid= left+ (right-left)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            left=mid+1;
        }
        else
        right=mid-1;
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, j;
        cin>>n;
        int arr[n];
        for(j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        int key;
        cin>>key;
        int output= binarySearch(arr, 0, n-1, key);
        (output==-1)? cout<<"Element not Present "<<j : cout<<"Element is present! "<<output+1;
    }
}
