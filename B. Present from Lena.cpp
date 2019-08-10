/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/118/B
Verdict     :AC
Time         :30 ms	0 KB
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

int main()
{

    int n;
    sf(n);
    int space=2*n;
    int x=1;
    for(int i=0; i<n+1; i++)
    {
        for(int s=0; s<space; s++)
            pf(" ");
        if(i==0)
            pf("0\n");
        else
        {
            pf("0");int mm=i;
            for(int m=1;m<=i;m++)
            pf(" %d",m);
            for(int m=i-1;m>=1;m--)
            pf(" %d",m);
            pf(" 0\n");
        }

space-=2;
//cout<<"Space "<<space<<endl;
    }
    space=2;x=n-1;
    for(int i=1;i<=n;i++)
    {
     for(int s=0;s<space;s++)
     pf(" ");
     if(i==n)
     pf("0\n");
     else
     {
     pf("0");
            int mm=x;
            for(int m=1;m<=x;m++)
            pf(" %d",m);
            for(int m=x-1;m>=1;m--)
            pf(" %d",m);
            pf(" 0\n");x--;

     }
    space+=2;

    }
    return 0;

}
/*
Ref:
*/

