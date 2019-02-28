/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1108/problem/B
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
    int res1,res2;
    mp<int,int>ck;
    int n,x;
    sf(n);
    int  maxx=0;
    v<int>div;
    while(n--)
    {
        sf(x);
        if(x>maxx)
            maxx=x;
        div.pb(x);
        ck[x]++;
    }
    res1=maxx;
    maxx=0;
mp<int,bool>ck1;
    for(int i=0; i<div.size(); i++)
    {

        if(res1%div[i]==0&&ck1[div[i]]==0)
        {
            ck1[div[i]]=1;
           ck[div[i]]--;
         //   cout<<ck[div[i]]<<endl;
        }

    }
    mp<int,int>::iterator it=ck.begin();
    while(it!=ck.end())
    {
        if((it->second)==1)
            if((it->first)>maxx)
                maxx=it->first;
        it++;
    }
    pf("%d %d\n",res1,maxx);
    return 0;
}

