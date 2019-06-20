/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1176/problem/C
Verdict     :
Time         :155 ms	11000 KB
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

#define MAX    500002

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48
int pre[43];
int main()
{

    int n;
    sf(n);
    mp<int,int>pos;
    pos[4]=1,pos[8]=2,pos[15]=3,pos[16]=4,pos[23]=5,pos[42]=6;

    vi arr[n];
    int ck=0;
    for(int i=0; i<n; i++)
    {
        //sf(arr[i]);
        int x;
        sf(x);
        if(x==4)
        {
            arr[pre[x]].pb(x);
            pre[x]++;
        }
        else
        {
/*if(arr[0].size()==5&&x==42)cout<<x<<" <> "<<i<<"  "<<pos[x]<<"  ",
        cout<<arr[0].size()<<endl;*/

            int pos1=pos[x];
            int s=sz(arr[pre[x]]);
           /* if(x==42)
            {
                cout<<i<<endl;
                cout<<"Pre "<<pre[x]<<endl;
                cout<<pos1<<"  "<<s<<endl;
            }*/
            if(s==pos1-1)
            {
                arr[pre[x]].pb(x);
                pre[x]++;
            }

        }


    }
    int i=0;
    while(sz(arr[i]))
    {
       /* cout<<"i-->"<<i<<" ";
        for(int j=0; j<sz(arr[i]); j++)
            cout<<arr[i][j]<<" ";
        nl;*/
        if(sz(arr[i])==6)ck++;
        i++;
    }
    int res=n-(ck*6);
   pf("%d\n",res);

    return 0;
}
/*
Ref:
*/
