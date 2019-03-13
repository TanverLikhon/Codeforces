/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1133/problem/C
Verdict     :AC
Time         :78 ms	800 KB
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
    int n,x;
    sf(n);
    int vec[n];
    for(int i=0; i<n; i++)
        sf(vec[i]);
    int ck=1;
    int diff=0;
    int maxx=1;
    sort(vec,vec+n);
    int i=0;
    for(int j=0; j<n;j++)
    {
        if(vec[j]-vec[i]<=5)
        {
            maxx=max(maxx,j-i+1);
        }
        else

            i++;


    }
    pf("%d\n",maxx);
    return 0;
}

