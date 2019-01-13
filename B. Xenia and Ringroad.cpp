#include<bits/stdc++.h>
using namespace std;

long long ck;
int main()
{
   long long n,m;
    cin>>n>>m;
long long arr[m];
    for(long long i=0;i<m;i++)cin>>arr[i];
    ck=arr[0]-1;
    for(long long i=1;i<m;i++)
    {
        if(arr[i]>=arr[i-1])ck=ck+(arr[i]-arr[i-1]);

        else ck=ck+(n-arr[i-1])+arr[i];
    }
    cout<<ck<<endl;
    return 0;
}
