/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1186/problem/D
Verdict     :AC
Time         :561 ms	1500 KB ->using cin in line 64
                   109 ms	1400 KB -> using scanf in line 64
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
    int n;
    sf(n);
    int arr[n];
    vi pos;
    vi neg;
    ll sum=0,sump=0,sumn=0;
    for(int i=0; i<n; i++)
    {
         float x;
    scanf("%f",&x);
        arr[i]=x;
        int res=ceil(x)-floor(x);
        if(x>0)
            sump+=arr[i];
        else
            sumn+=abs(arr[i]);
  if(res!=0)
  {
      if(x>0)pos.pb(i);
      else neg.pb(i);
  }

        sum+=arr[i];
    }

/*    for(int i=0; i<n; i++)
    {
        pf("%d\n",arr[i]);
    }
*/
    //cout<<sz(neg)<<"  "<<sz(pos)<<endl;
    if(sum==0)
    {
        for(int i=0; i<n; i++)
        {
            pf("%d\n",arr[i]);
        }
        return 0;
    }
    int diff=sump-sumn;
  //  cout<<"Diff "<<diff<<endl;
    if(diff>0)
    {
        for(int i=0; i<diff; i++)
            arr[neg[i]]--;
    }
    else
    {
        diff=abs(diff);
        for(int i=0; i<diff; i++)
            arr[pos[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        pf("%d\n",arr[i]);
    }
    return 0;
}
/*
Ref:
*/

