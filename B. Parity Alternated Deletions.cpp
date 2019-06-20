/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1144/problem/B
Verdict     :AC
Time         :31ms
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
    vi odd;
    vi even;
    while(n--)
    {
        int x;
        sf(x);
        if(x%2)
            odd.pb(x);
        else
            even.pb(x);
    }
    int szo=odd.size(),sze=even.size();
    if(szo==sze||abs(szo-sze)==1)
        pf("0\n");
    else
    {
        ll sum=0;
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        if(szo>sze)
        {
            int x=szo-sze;
            for(int i=0; i<x-1; i++)
                sum+=odd[i];
        }
        else
        {
            int x=sze-szo;
            for(int i=0; i<x-1; i++)
                sum+=even[i];
        }
        pf("%lld\n",sum);
    }



    return 0;
}
