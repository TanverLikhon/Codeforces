#include<bits/stdc++.h>
///accepted
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr1[n-1]=0;
   long long max=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<=max)arr1[i]=max-arr[i]+1;
        else
        {
            max=arr[i];
            arr1[i]=0;
        }

    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    return 0;

}
