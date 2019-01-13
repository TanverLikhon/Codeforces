#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted:)
int main()
{
    int n,m,rem,days;
sf("%d %d",&n,&m);
days=n;
while(n/m)
{
   days=days+n/m;
   n=n%m+n/m;
   // n=n/m;
}
pf("%d",days);

return 0;
}

