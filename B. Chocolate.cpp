/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/617/B
Verdict     :AC
Time         :15 ms	0 KB
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
    int n,one=0,zero=0;
    sf(n);
    ll res=1,tmp;
    int arr[n];
    int ck;
    for(int i=0; i<n; i++)
    {
        sf(arr[i]);
        if(arr[i]==0)
            zero++;
        else
        {
            one++;
            if(one==1)
                ck=i;
        }
    }
    if(one==0){pf("0\n");return 0;}
    tmp=ck;
    for(int i=ck+1; i<n; i++)
    {
        if(arr[i]==1)
        {
            res*=(i-tmp);
            tmp=i;
        }
    }
    pf("%lld\n",res);
    return 0;
}

