/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/793/problem/A
Verdict     :AC
Time         :46ms
Memory  :1100KB
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
int n,k;
sff(n,k);
int sz=n;
int minn=INT_MAX;
v<int >vec;
while(n--)
{
    int x;
    sf(x);
    if(x<minn)minn=x;
    vec.pb(x);
}
ll ck=0;
for(int i=0;i<sz;i++)
{
    if((vec[i]-minn)%k==0)
        ck+=(vec[i]-minn)/k;
    else
    {
        ck=-1;
        break;
    }
}
    pf("%lld\n",ck);
    return 0;
}

