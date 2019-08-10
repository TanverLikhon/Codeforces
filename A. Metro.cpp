/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/1055/A
Verdict     :
Time         :30 ms	200 KB
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

#define MAX    1009

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
vi edge[MAX];
int dest;
bool flag;
bool visited[MAX];
void dfs(int x)
{
    visited[x]=true;
    if(x==dest)
    {
        flag=true;
        return;
    }
    for(int i=0; i<sz(edge[x]); i++)
    {
        if(!visited[edge[x][i]])
            dfs(edge[x][i]);
    }
}
int main()
{
    int n,s;
    sff(n,s);
    int t1;
    dest=s-1;
    sf(t1);
    int prv=-1;
    if(t1)prv=0;
    for(int i=1; i<n; i++)
    {
        int x;
        sf(x);
        if(x&&prv!=-1)
        {
            edge[prv].pb(i);
            prv=i;
        }
        else if(x)prv=i;
        t1=x;
    }
    sf(t1);
    prv=-1;
    if(t1)prv=0;
    for(int i=1; i<n; i++)
    {
        int x;
        sf(x);
        if(x&&prv!=-1)
        {
            edge[i].pb(prv);
            prv=i;

        }
        else if(x)prv=i;
    }
  /*  for(int i=0; i<n; i++)
    {
        cout<<i<<"-----"<<endl;
        for(int j=0; j<edge[i].size(); j++)
        {
            cout<<edge[i][j]<<"  ";

        }


    }*/
    dfs(0);
    if(flag)pf("YES\n");
    else pf("NO\n");

    return 0;
}
/*
Ref:
*/
