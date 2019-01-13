#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1){
    long long ck=0;
    long long n,k;

    cin>>n>>k;

    if(2*n<=k)
        ck=0;

    else if(n>k)
    {
        if(k%2==0)
        {
            ck=k/2;
            ck--;
        }
        else
            ck=(k-1)/2;
    }
   else if(k>n)
    {
        ck=n/2;
        /*long long z=k-n;
        if(z%2==0)
            ck=(n-z)/2;
        else
            ck=(n-z+1)/2;*/
    }
    else if(k==n)
    {
if(k%2==0){ck=k/2;ck--;}
else ck=k/2;
    }
    cout<<ck<<endl;}
    return 0;

}
