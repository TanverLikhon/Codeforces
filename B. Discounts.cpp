/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1132/problem/B
Verdict     :AC
Time         :1185 ms	6196 KB
Memory  :
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
    int n;
    sf(n);v<ll>arr;
    ull sum=0;
    while(n--)
    {
        ll x;
      scanf("%lld",&x);
      sum+=x;
      arr.pb(x);
    }
    sort(arr.begin(),arr.end());
    int m;
    sf(m);
    ull s=sum;

    while(m--)
    {
        int q;
        sf(q);

         int sz=arr.size()-q;
         s=s-arr[sz];
        cout<<s<<endl;
        s=sum;
    }
    return 0;
}

