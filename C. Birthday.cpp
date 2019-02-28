/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1131/problem/C
Verdict     :AC
Time         :15ms
Memory  :0KB
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)

#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define pi          pair
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

int main()
{
    int n;
    sf(n);
    int z=n;
    v<ll>vec;
    while(n--)
    {
        ll x;
        scanf("%lld",&x);
        vec.pb(x);
    }
    sort(vec.begin(),vec.end());
    if(z%2==0)
    {
        for(int i=0; i<z; i+=2)
            pf("%lld ",vec[i]);
        for(int i=z-1; i>=0; i-=2)
            pf("%lld ",vec[i]);
    }
    else
    {
        for(int i=0; i<z; i+=2)
            pf("%lld ",vec[i]);
        for(int i=z-2; i>=0; i-=2)
            pf("%lld ",vec[i]);
    }


    return 0;
}

