/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/189/problem/A
Verdict     :AC
Time         :31 ms	0 KB
Memory  :
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
int maxCoin(int values[],int n,int total)
{
    int change[total+1];
    change[0]=0;
    for(int j=1;j<=total;j++)
    {
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(j>=values[i]&&(change[j-values[i]]+1)>maxx)
                maxx=change[j-values[i]]+1;
        }
        change[j]=maxx;
    }
    return change [total];
}
int main()
{
    int n=3;
  int val[n];
  int total;
  sffff(total,val[0],val[1],val[2]);
  int res=maxCoin(val,n,total);
  pf("%d\n",res);
  return 0;
}

