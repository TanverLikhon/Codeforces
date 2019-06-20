/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1143/problem/A
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
#define sc(a) scanf("%c",&a)
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
    int n;sf(n);
    int arr[n];
    int one=0,zero=0;
    for(int i=0; i<n; i++)
    {
        sf(arr[i]);
        if(arr[i]==1)
            one++;
        else
            zero++;
    }
    int ck=0,ck1=0;
    for(int i=0; i<n; i++)
    {

        if(arr[i]==1)
            ck1++;
        else
            ck++;
        if(ck==zero||ck1==one)
        {
            pf("%d\n",i+1);break;
        }
    }
    return 0;
}
