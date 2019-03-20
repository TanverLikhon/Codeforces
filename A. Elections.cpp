/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/570/problem/A
Verdict     :AC
Time         :31ms
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
    int n,m,x;
    sff(n,m);
    int cand[n+1];
    for(int i=1; i<=n; i++)
        cand[i]=0;
    int arr[m][n];
    int maxx;
    for(int i=0; i<m; i++)
    {
        int c;
        maxx=-1;
        for(int j=0; j<n; j++)
        {
            sf(x);
            if(x>maxx)
                maxx=x,c=j+1;
        }
        cand[c]++;
    }
    maxx=-1;
    int win;
    for(int i=1; i<=n; i++)
        if(cand[i]>maxx)
            maxx=cand[i],win=i;



    pf("%d\n",win);
    return 0;
}

