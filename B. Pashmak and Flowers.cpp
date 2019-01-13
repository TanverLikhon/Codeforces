#include<bits/stdc++.h>
///unsolved

using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
ll ck,ck1;

int main()
{
    ll n,way=0;
    vector<ll>vec;
    sf("%lld",&n);
    for(ll i=0; i<n; i++)
    {
        ll x;
        sf("%lld",&x);
        vec.pb(x);
    }
    sort(vec.begin(),vec.end());
    ll x=vec[n-1]-vec[0];
    if(x!=0)
    {
        for(ll i=1; i<n-1; i++)
        {
            if(vec[i]==vec[0])
                ck++;
            else if(vec[i]==vec[n-1])
                ck1++;
        }
        ck++;ck1++;
        way=ck*ck1;
        pf("%lld %lld",x,way);

    }
    else


    return 0;
}
