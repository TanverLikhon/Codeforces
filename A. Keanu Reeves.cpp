/*Never Give up*/
/*
Problem  :http://codeforces.com/contest/1189/problem/A
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

int arr0[101],arr1[101];
int main()
{
    int n;
    sf(n);
    string str;
    cin>>str;
    int one=0,zero=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')zero++;
        else one++;
        arr0[i]=zero;
        arr1[i]=one;
    }
    if(zero==n||zero!=one)
    {
    pf("1\n");
        cout<<str<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
      int x,z;
      x=arr0[n-1]-arr0[i],z=arr1[n-1]-arr1[i];

     // cout<<x<<" "<<z<<endl;
      if(arr0[i]!=arr1[i]&&x!=z)
      {
        pf("2\n");
             // cout<<"i  "<<i<<endl;
        for(int j=0;j<=i;j++)
        cout<<str[j];
       cout<<" ";
        for(int j=i+1;j<n;j++)
        cout<<str[j];//,en1;
        nl;
        return 0;
      }

    }


    return 0;
}
/*
Ref:
*/
