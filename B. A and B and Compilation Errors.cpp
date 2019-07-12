/*Never Give up*/
/*
Problem  :http://codeforces.com/problemset/problem/519/B
Verdict     :Accepted	109 ms	1200 KB
Time         :
Memory  :
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1        pf("%d\n");
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
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)

// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{
    int n;
    sf(n);
    int arr1[n],arr2[n-1],arr3[n-2];
    for(int i=0; i<n; i++)
    {
        sf(arr1[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        sf(arr2[i]);
    }

    for(int i=0; i<n-2; i++)
    {
        sf(arr3[i]);
    }
    int f=-1,t=-1;
    sort(arr1,arr1+n);
    sort(arr2,arr2+n-1);
    sort(arr3,arr3+n-2);
    for(int i=0; i<n; i++)
    {
        if(i<n-1)
        {
           if(arr1[i]!=arr2[i]&&f==-1)
                f=arr1[i];

            if(i<n-2)
            {
                if(arr2[i]!=arr3[i]&&t==-1)
                    t=arr2[i];
            }
            else if(t==-1)
                t=arr2[i];

        }
        else if(f==-1)
            f=arr1[i];

        /* if(i<n-1)
         {
             if(i<n-2)
             {
                 if(arr2[i]!=arr3[i]&&t=-1)
                     t=arr1[i];
             }
             else if(t==-1)
                 t=arr2[i];

         }*/
        if(t>=0&&f>=0)
            break;
    }
    pf("%d\n%d\n",f,t);
    return 0;
}
