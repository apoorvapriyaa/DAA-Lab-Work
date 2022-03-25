#include<iostream>
#include<cmath>
using namespace std;

int jumpSearch(int arr[], int n, int key)
{
    int jump= sqrt(n);
    int steps= jump;
    int prev=0;
    while(arr[min(steps, n)-1]<key)
    {
        prev=steps;
        steps+=jump;
        if(prev>=n)
            return -1;
    }
    while(arr[prev]<key)
    {
        prev++;
        if(prev==min(steps, n))
            return -1;
    }
    if(arr[prev]==key)
    return prev;
    
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
        int output= jumpSearch(arr, n, key);
        (output==-1)? cout<<"Element not Present "<<j : cout<<"Element present at index "<<output+1;
    }
}
