/*Never Give up*/
/*
Problem  :
Verdict     :
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
    int n;
    sf(n);
    mp<int,int>ck;
    mp<int,int>ck1;
    while(n--)
    {
        int x,y;
        sff(x,y);
        ck[x+y]++,ck1[abs(x-y)]++;
    }
    mp<int,int>::iterator it=ck.begin();
    mp<int,int>::iterator it1=ck1.begin();
    int sum=0;

    while(it!=ck.end())
    {
       if(it->second>1)
     {
           cout<<"1 "<<it->first<<"   "<<it->second<<endl;
          sum+=((it->second-1)*it->second)/2;
     }
        it++;
    }
     /* while(it1!=ck1.end())
    {
       if(it1->second>1)
      {
          cout<<"2 "<<it1->first<<"   "<<it1->second<<endl;
          sum+=((it1->second-1)*it1->second)/2;
      }
        it1++;
    }*/
    pf("%d\n",2*sum);
    return 0;
}

