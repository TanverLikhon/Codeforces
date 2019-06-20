/*Never Give up*/
/*
Problem  :http://codeforces.com/problemset/problem/432/B
Verdict     :AC
Time         :155ms
Memory  :6400KB
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
#define mi         map<int,int>
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
mi home;
mi away;
int main()
{
int n;
sf(n);
int res1[n];
int res2[n];
int hm[n];
int aw[n];
for(int i=0;i<n;i++)
{
res1[i]=n-1,res2[i]=0;
int x,y;sff(x,y);
hm[i]=x,aw[i]=y;
home[x]++,away[y]++;
}
for(int i=0;i<n;i++)
{
int x=home[aw[i]];
//cout<<aw[i]<<"->"<<x<<endl;
//cout<<n-x-1<<endl;
if(x)
res1[i]+=x;
res2[i]+=n-x-1;
}
for(int i=0;i<n;i++)
pf("%d %d\n",res1[i],res2[i]);
return 0;
}
