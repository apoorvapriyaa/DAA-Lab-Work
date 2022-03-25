#include<iostream>
using namespace std;

int linearSearch(int arr[], int i, int n, int key)
{
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
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

int exponentialSearch(int arr[], int n, int key)
{
    if(arr[0]==key)
    return 0;
    int i=1;
    while(i<n && arr[i]<=key)
    {
        return i*=2;
    }
    return linearSearch(arr, int (i/2), n, key);
    //return binarySearch(arr, int (i/2), min(i, n-1), key);
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
        int output= exponentialSearch(arr, n, key);
        (output==-1)? cout<<"Element not Present "<<j : cout<<"Element present at index "<<output+1;
    }
}
