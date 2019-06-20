/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/447/B
Verdict     :AC
Time         :31ms
Memory  :100KB
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
   string str;
   cin>>str;
   int k;
   sf(k);
   int x;mp<char,int>table;int maxx=-1;
   for(int i=97;i<=122;i++)
   {
       sf(x);  maxx=max(maxx,x);
       table[(char)i]=x;
   }
   ll sum=0;
   for(int i=0;str[i]!='\0';i++)
 {
    // cout<<str[i]<<"  "<<table[str[i]]<<endl;
     sum+=(table[str[i]]*(i+1));
 }
 int sz=str.size()+1;
 while(k--)
 {
     sum+=maxx*sz;
     sz++;
 }
//sum+=(maxx)*k;
pf("%lld\n",sum);
   return 0;
}

