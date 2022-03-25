//Week 2 ques 1
//searching the key and returning the number of duplicate elements in an array
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            while(arr[i]==key)
            {
                i++;
                count++;
            }
        return count;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
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
        int output= linearSearch(arr, n, key);
        (output==-1)? cout<<"Element not present "<<j : cout<<key<<"-"<<output;
    }
}
