/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1162/problem/A
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
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

int main()
{
int n,h,m,l,r,x;
sfff(n,h,m);
int arr[n+1];
for(int i=1;i<=n;i++)arr[i]=h;
while(m--)
{
    sfff(l,r,x);
    for(int i=l;i<=r;i++)
      //  if(arr[i]!=h)
            arr[i]=min(arr[i],x);
}
sort(arr+1,arr+n+1);
int sum=0;

//for(int i=1;i<=n;i++)cout<<arr[i]<<"  ";

for(int i=1;i<=n;i++)sum+=arr[i]*arr[i];
pf("%d\n",sum);

return 0;
}

