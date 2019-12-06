/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/959/problem/B
Verdict     :AC
Time         :296 ms	18700 KB
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
#define pf1(a)        pf("%d\n",a);
#define PI  acos(-1)
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
#define sp  ' '
// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{
    faster
    int n,k,m;
    cin>>n>>k>>m;
    mp<string,int>idx;
    string track[n+1];
    int cost[n+1];
    for(int i=1; i<=n; i++)
    {
        string str;
        cin>>str;
        track[i]=str;
    }
    pair<int,string>pp[n+1];
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        cost[i]=x;
    }
    int cc[k+1];
    for(int i=1; i<=k; i++)
    {
        cc[i]=INT_MAX;
        int x;
        cin>>x;
        for(int j=1; j<=x; j++)
        {
            int y;
            cin>>y;
            cc[i]=min(cc[i],cost[y]);
            string ss=track[y];
            idx[ss]=i;
        }
    }
    ll sum=0;
    for(int i=1; i<=m; i++)
    {
        string str;
        cin>>str;

        int grp=idx[str];
        sum+=cc[grp];
    }
    cout<<sum<<endl;

    return 0;
}
/*
Ref:
*/
