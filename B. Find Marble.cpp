/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/285/B
Verdict     :AC
Time         :
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

int main()
{
int n,s,t;
sfff(n,s,t);
bool ck[n+1];
int arr[n+1];
for(int i=1;i<=n;i++)
    sf(arr[i]),ck[i]=false;
ck[s]=true;
int ck1=0;
int tmp=arr[s];
if(s==t){pf("0\n");return 0;}
    while(ck[tmp]==false)
{
    ck[tmp]=true;
    ck1++;if(tmp==t)break;
  //  cout<<arr[tmp]<<" ";
    tmp=arr[tmp];

  //  if(ck[tmp]==false){pf("-1\n");return 0;}
}
if(ck[t]==false)pf("-1\n");
 else pf("%d\n",ck1);

return 0;
}

