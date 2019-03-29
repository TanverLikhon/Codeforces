/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/467/B
Verdict     :AC
Time         :31ms
Memory  :8kB
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%ld",&a)
#define sll(a,b)         scanf("%ld%ld",&a,&b)
#define slll(a,b,c)         scanf("%ld%ld%ld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%ld%ld%ld%ld",&a,&b,&c,&d)
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define pi          pair
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
int countSetBits(int n)
{
    int ck = 0;
    while (n)
    {
        ck += n & 1;//if n== odds then ck++
        n >>= 1;
    }
    return ck;
}
int FlippedCount(int a, int b)
{
    return countSetBits(a^b);
}
int main()
{
  int n,m,k;
  sfff(n,m,k);int ck=0;
  int arr[m+1];
  for(int i=0;i<=m;i++)
  {
      sf(arr[i]);
  }
    for(int i=0;i<m;i++)
  {
      if(FlippedCount(arr[m],arr[i])<=k)ck++;
  }
  pf("%d\n",ck);
  return 0;
}

