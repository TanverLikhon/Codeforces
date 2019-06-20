/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/450/B
Verdict     :AC
Time         :30ms
Memory  :0kB
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
//%1000000007
int main()
{
ll n,x,y;
slll(x,y,n);
ll arr[7];
arr[1]=x,arr[2]=y;
for(int i=3;i<=6;i++)
    arr[i]=(arr[i-1]%1000000007-arr[i-2]%1000000007)%1000000007;
 arr[0]=arr[6];
if(n<=6)pf("%lld\n",(arr[n]+1000000007)%1000000007);
else
{
    ll sum=0 ;
    sum+=(arr[n%6]%1000000007);
    pf("%lld\n",(sum+1000000007)%1000000007);
}
//1000000006
return 0;
}

