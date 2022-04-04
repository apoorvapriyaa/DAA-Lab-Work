#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, temp;
    int c=0, s=0;
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            c++;
            s++;
            arr[j+1]=arr[j];
            j=j-1;
        }
        s++;
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons= "<<c<<endl;
        cout<<"shifts= "<<s<<endl;
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
        insertionSort(a, n);
    }
}
