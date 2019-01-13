
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
int t;
sf("%d",&t);
for(int i=0;i<t;i++)
{
    ll a,b,k;
    sf("%lld %lld %lld",&a,&b,&k);

        ll x=(k/2)*(a-b)+(k%2)*a;
        pf("%lld\n",x);
}

return 0;
}
