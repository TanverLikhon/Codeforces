/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1201/problem/A
Verdict     :
Time         :93 ms	1000 KB
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
    int n,m;
    sff(n,m);
    int arr[m];
    char str[1005][1005];
    getchar();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sc(str[i][j]);

        }
      getchar();
    }

    for(int i=0; i<m; i++)
        sf(arr[i]);
       ll sum=0;
    for(int i=0; i<m; i++)
    {
        int a=0,b=0,c=0,d=0,e=0;
        int mx=-1;
        for(int j=0; j<n; j++)
        {
        //  cout<<str[i][j];
            if(str[j][i]=='A')a++;
            else if(str[j][i]=='B')b++;
            else if(str[j][i]=='C')c++;
            else if(str[j][i]=='D')d++;
            else if(str[j][i]=='E')e++;

        }
///nl;
//cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<endl;
       mx=max(mx,a);mx=max(mx,b);mx=max(mx,c);
       mx=max(mx,d);mx=max(mx,e);
     //  cout<<sum<<endl;
       sum+=mx*arr[i];

    }
 pf("%lld\n",sum);

    return 0;
}
/*
Ref:
*/
