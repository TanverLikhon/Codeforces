#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
int ck;
int main()
{
ll n;
int arr[5]={100,20,10,5,1},i=0;
sf("%lld",&n);
while(n!=0)
{
    ck=ck+n/arr[i];
    n=n%arr[i];
    i++;
}
pf("%d\n",ck);
return 0;
}
