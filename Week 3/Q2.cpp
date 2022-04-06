#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int c=0, s=0, min_idx;
    for(int i=0; i<n-1; i++)
    {
        min_idx=i;
        for(int j=i+1; j<n; j++)
        {
            c++;
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
    s++;
    int temp=arr[min_idx];
    arr[min_idx]=arr[i];
    arr[i]=temp;
    }
    for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons= "<<c<<endl;
        cout<<"swaps= "<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        selectionSort(a, n);
    }
}
