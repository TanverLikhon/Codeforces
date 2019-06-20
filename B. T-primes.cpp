/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/230/B
Verdict     :AC at 7th attempt
Time         :1246ms
Memory  :6600KB
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
#define MAX 1000000
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool prime[MAX];
//vector<ll>primes;
mp<ll,bool>primes;
void    sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for (ll p=2; p*p<=MAX; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p; i<=MAX; i += p)
                prime[i] = false;
        }
    }
for(ll i=2; i<=MAX; i++)
   if(prime[i])primes[i]=1;
      //primes.pb(i);
    //cout<<"$ "<<prime[4]<<endl;
}
int main()
{
  //  faster
    sieve();
    int n;
  sf(n);
    while(n--)
    {
        ll x;//sl(x);
        cin>>x;
        if(x>4&&x%2==0)
            pf("NO\n");
        else
        {
//en;
            ll xx=x;bool flag=false;

            ll sq=sqrt(x);
            //cout<<sq<<endl;
            if(primes[x]==1)pf("NO\n");
            else if(sq*sq!=x)pf("NO\n");
            else if(primes[sq]==1)pf("YES\n");
            else pf("NO\n");
        /*    int ck=0;
            ll sum=1;
            for(int i=0; primes[i]<=sq&&i<primes.size(); i++)
            {
                if(primes[i]*primes[i]==xx){pf("YES\n"),flag=true;break;}
            }
      if(flag==false)pf("NO\n");*/
        }
    }
    return 0;
}
