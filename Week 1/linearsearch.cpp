#include<iostream>
using namespace std;

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
        for(j=0; j<n; j++)
        {
            if(arr[j]==key)
            {
                cout<<"Present "<<j+1;
                break;
            }
        }
        if(j==n)
        cout<<"Not Present "<<j;
    }
}
