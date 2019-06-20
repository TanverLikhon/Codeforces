/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/977/problem/C
Verdict     :AC
Time         :156 ms	6500 KB
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
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li            list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         pf("\n")
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
mp<int,int >freq;
int main()
{
  int n,k;
  sff(n,k);
  ll sum=0;
  while(n--)
  {
    int x;sf(x);
    freq[x]++;
  }


  mp<int,int >::iterator it=freq.begin();
  if(k==0)
   {
     int x=it->ff;
     if(x<2){pf("-1\n");return 0;}
     else {pf("%d\n",x-1);return 0;}

   }
  while(it!=freq.end())
  {
   sum+=it->ss;
   int x=it->ff;
   if(sum==k){pf("%d\n",x);return 0;}
   if(sum>k){pf("-1\n");return 0;}it++;
  }

return 0;
}
/*
Ref:
*/
