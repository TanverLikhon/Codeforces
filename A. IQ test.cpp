/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/25/A
Verdict     :AC
Time         :60 ms	0 KB
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
    int x;
    int even=0,odd=0;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        sf(arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(odd==1)
    {
        for(int i=0; i<n; i++)
            if(arr[i]%2==1)
            {
                pf("%d ",i+1);
                return 0;
            }
    }
    else
        for(int i=0; i<n; i++)
            if(arr[i]%2==0)
            {
                pf("%d ",i+1);
                return 0;
            }

}

