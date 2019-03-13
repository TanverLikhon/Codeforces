/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/509/A
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
    int arr[n][n];
    int maxx=1;
    for(int i=0; i<n; i++)
        arr[0][i]=1,arr[i][0]=1;
    for(int i=1; i<n; i++)
        for(int j=1; j<n; j++)
        {
               arr[i][j]=arr[i-1][j]+arr[i][j-1];
               if(arr[i][j]>maxx)maxx=arr[i][j];
        }
pf("%d\n",maxx);
return 0;

}

