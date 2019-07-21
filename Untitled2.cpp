/*Never Give up*/
/*
Problem  :
Verdict     :
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
ll fun(int n,int m)
{
int ll sum1=-1,sum=0;
    if(n>=5&&m>=1)
    {

        sum+=((m+1)/2);
        int x=(n+1)/3;
        // cout<<x<<endl;
        sum*=x;
    }
    else if(n<5&&m>=1)
    {
        sum+=((m+1)/2);
        cout<<sum<<" dd ";
        if(n==4&&m>=2)
        {
            int s=(m+1)/3;
            sum+=s;
            cout<<s<<endl;
        }

    }
    sum1=max(sum1,sum);
    cout<<sum<<endl;
    sum=0;
    if(m>=5&&n>=2)
    {

        sum+=((n+1)/2);
        int x=(m+1)/3;
        // cout<<x<<endl;
        sum*=x;
    }
    else if(m<5&&n>=1)
    {
        sum+=((n+1)/2);
        cout<<sum<<" dd ";
        if(m==4&&n>=2)
        {
            int s=(n+1)/3;
            sum+=s;
            cout<<s<<endl;
        }

    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<2&&m<2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    ll sum1=-1,sum=0;
    if(n==1&&m>1)
    {
        cout<<(m+1)/3<<endl;
        return 0;
    }
    if(m==1&&n>1)
    {
        cout<<(n+1)/3<<endl;
        return 0;
    }

cout<<fun(n,m)<<endl;
    return 0;
}
