#include<bits/stdc++.h>
#define el endl;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int key;
        cin>>key;
        sort(nums.begin(), nums.end());
        int count=0, j, k;
        for(int i=0; i<n; i++)
        {
            j=i;
            k=n-1;
            while(j<k)
            {
                if(nums[k]-nums[j]==key)
                {
                    count++;
                    k--;
                    j++;
                }
                else if(nums[k]-nums[j]>key)
                    k--;
                else
                    j++;
            }
        }
        cout<<count<<el;
    }
}
