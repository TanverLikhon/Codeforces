///https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    if(k*l<n*nl||c*d<n||p<n*np)
        pf("0\n");

    else
    {
        int min=1000000;
        if((k*l)/(n*nl)<min)
        {
            min=(k*l)/(n*nl);
        }
        if((c*d)/n<min)
        {
            min=(c*d)/n;
        }
        if(p/(n*np)<min)
        {
            min=p/(n*np);
        }
        pf("%d\n",min);
    }
    return 0;
}
