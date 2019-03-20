/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1141/problem/B
Verdict     :AC at 7th attempt
Time         :61ms
Memory  :0
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
    int tmp,tmp1;
    bool flag=false;
    int ck1=0;
    sf(tmp1);
    tmp=tmp1;
    int ck=0;
    if(tmp1==1)ck++,ck1++;
    int maxx=0;
    int x;
    int y=0;
    for(int i=1; i<n; i++)
    {
        sf(x);
        if(x==1)
           {

                ck++,ck1++;
           }
          if(x!=1||i==n-1)
          {
                      maxx=max(maxx,ck);
              if(flag==false)
                y=ck1,flag=true;
             if(i!=n-1) ck=0;
           //   cout<<maxx<<endl;
          }

    }
 //cout<<y<<"  "<<ck<<endl;
    if(tmp1==x&&tmp==1)
        maxx=max(maxx,ck+y);

pf("%d\n",maxx);
    return 0;
}
