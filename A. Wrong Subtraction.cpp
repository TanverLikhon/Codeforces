#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted :)
int main()
{
    ll n;
    int k;
    sf("%lld %d",&n,&k);
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
            n=n-1;//cout<<n<<endl;
    }
    pf("%lld\n",n);

    return 0;
}

