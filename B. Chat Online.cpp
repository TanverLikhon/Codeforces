/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/469/B
Verdict     :AC
Time         :15ms
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1        pf("%d\n");
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)

// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    1005

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
int a[MAX],b[MAX],c[MAX],d[MAX];
int main()
{
    int p,q,r,l;
    sffff(p,q,l,r);
    for(int i=0; i<p; i++)
        sff(a[i],b[i]);
    for(int j=0; j<q; j++)
        sff(c[j],d[j]);

    int ck=0;
    for(int i=l; i<=r; i++)
    {
        bool flag=false;
        for(int j=0; j<q; j++)
        {
            for(int k=0; k<p; k++)
            {
                if(a[k]<=(c[j]+i)&&b[k]>=(c[j]+i))
                {
                    ck++,flag=true;
                    break;
                }
                else if(a[k]<=(d[j]+i)&&b[k]>=(d[j]+i))
                {
                    ck++,flag=true;
                    break;
                }
                else if(a[k]>=(c[j]+i)&&b[k]<=(d[j]+i))
                {
                    ck++,flag=true;
                    break;
                }

            }if(flag)break;
        }
    }

    pf("%d\n",ck);
    return 0;
}
/*
Ref:
*/
