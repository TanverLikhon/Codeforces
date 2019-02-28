/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1131/problem/A
Verdict     :AC
Time         :31ms
Memory  :8KB
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
    ll w1,h1,w2,h2,ck=0;
    scanf("%lld%lld%lld%lld",&w1,&h1,&w2,&h2);

    if(w1==w2)
    {
        ck=2*(h1+h2+w1)+4;
    }
    else
    {
        ck=2*(h1+h2)+w1+w2+w1-w2+4;
    }
    pf("%lld\n",ck);
    return 0;
}

