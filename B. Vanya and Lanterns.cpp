/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/492/B
Verdict     :AC
Time         :31ms
Memory  :0KB
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

int main()
{
 ll n,l;
  sll(n,l);
  vl vec; bool flag1=false,flag2=false;
  while(n--)
  {
      ll x;sl(x);
      if(x==0)flag1=true;
      else if(x==l)flag2=true;
      vec.pb(x);
  }
  sort(vec.begin(),vec.end());
  double maxx=-1;
  for(int i=1;i<vec.size();i++)
    maxx=max((vec[i]-vec[i-1])/2.0,maxx);
    if(flag1==false)maxx=max(maxx,vec[0]*1.0-0);
    if(flag2==false)maxx=max(maxx,l*1.0-vec[vec.size()-1]);
pf("%.10f",maxx);
return 0;
}

