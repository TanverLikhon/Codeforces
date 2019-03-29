/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1139/problem/B
Verdict     :AC
Time         :78ms
Memory  :800kB
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
    int n;sf(n);
    int arr[n];
    for(int i=0; i<n; i++)
        sf(arr[i]);
    ull sum=arr[n-1];
    int x=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
      //  cout<<x<<"  ";
        if(arr[i]>=x)
        {
            sum+=x-1;
            x=x-1;
        }
        else if(arr[i]<x)
        {
            sum+=arr[i];
            x=arr[i];
        }
        if(x==0)break;
    }
    cout<<sum<<endl;
    return 0;
}

