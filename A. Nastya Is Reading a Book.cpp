/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1136/problem/A
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

int main()
{
 int n;
 sf(n);
 mp<int,pair<int,int>>ck;
 for(int i=1;i<=n;i++)
 {
     int x,y;
     sff(x,y);
    ck[i]={x,y};
 }
 int z;sf(z);
 for(int i=1;i<=n;i++)
 {
     if(z>=ck[i].first&&z<=ck[i].second)
     {
        // cout<<i<<endl;
         pf("%d\n",n-i+1);
         break;
     }
 }
  //  cout<<ck[i].first<<"  "<<ck[i].second<<endl;
return 0;
}

