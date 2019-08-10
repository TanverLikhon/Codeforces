/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1196/problem/B
Verdict     :AC
Time         :187 ms	1600 KB
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

    int nn;
    sf(nn);
    while(nn--)
    {
        vi o;
        int n,k;
        sff(n,k);
        int odd=0;
        for(int i=0; i<n; i++)
        {
            int x;
            sf(x);
            if(x%2==1)
            {
                odd++;
                o.pb(i+1);
            }
        }
        int szz=sz(o);
      if(odd<k)
      {
      pf("NO\n");

      }
       else if(szz==k)
        {
            pf("YES\n");
            for(int i=0; i<sz(o)-1; i++)
                pf("%d ",o[i]);
            pf("%d\n",n);
        }
        else if(szz>k)
        {

           if((szz-k+1)%2==0||odd==0)
           {
            pf("NO\n");
           }
           else
           {
            pf("YES\n");
            for(int i=0; i<k-1; i++)
                pf("%d ",o[i]);
            pf("%d\n",n);

           }

        }

    }

    return 0;
}
/*
Ref:
*/
