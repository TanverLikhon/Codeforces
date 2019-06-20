/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/265/B
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
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    int arr[n];

    for(int i=0; i<n; i++)
        sf(arr[i]);
    ll sum=arr[0];
    //cout<<"sum ";
//    cout<<sum<<endl;
    for(int i=0; i<n-1; i++)
    {
      //  cout<<"i "<<i<<endl;
        if(arr[i]>arr[i+1]) {sum+=(arr[i]-arr[i+1])+1;}
        else
        {
            sum+=arr[i+1]-arr[i]+1;
         //   en;
        }


    }

    pf("%lld\n",sum+n);
    return 0;
}
