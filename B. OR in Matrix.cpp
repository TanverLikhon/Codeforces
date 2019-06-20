/*Never Give up*/
/*
Problem  :http://codeforces.com/contest/486/problem/B
Verdict     :AC
Time         :30ms
Memory  :100KB
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
#define sz              size()
#define all(a)          a.begin(), a.end()
#define f(i, a, b)      for(int i=(a);i<=(b);i++)
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
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
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
int ro[100],co[100];
int main()
{
    int r,c,zero=0,one=0;
    sff(r,c);
    int arr[r][c];
    int arr1[r][c];
    int rc[r]= {0},cc[c]= {0};
    for(int i=0; i<r; i++)
    {
        rc[i]=0;
        for(int j=0; j<c; j++)
        {
            cc[j]=0;
            arr1[i][j]=1;
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sf(arr[i][j]);
            if(arr[i][j]==0)
            {
                zero++;
                for(int x=0; x<r; x++)arr1[x][j]=0;
                for(int z=0; z<c; z++)arr1[i][z]=0;
                rc[i]++,cc[j]++;
            }
            else one++;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr1[i][j])ro[i]++,co[j]++;
        }
    }
    if(zero==r*c||one==r*c);
    else
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(arr[i][j])
                {
                  if(ro[i]||co[j]);
                  else
                  {pf("NO\n");return 0;}
                }
            }
        }
    }
    pf("YES\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)pf("%d ",arr1[i][j]);
        nl;
    }
    return 0;
}
