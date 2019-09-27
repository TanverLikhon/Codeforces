/*Never Give up*/
/*
Problem  :https://codeforces.com/problemset/problem/546/C
Verdict     :AC
Time         :31 ms	200 KB
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
#define pf1(a)        pf("%d\n",a);
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
mp<li,int>cc;
int main()
{
    int n;
    sf(n);
    int k1,k2,xx,yy,x,ck=0;
    sf(k1);
    bool flag=true,winner1=false;
    queue<int >q1;
    queue<int>q2;
    while(k1--)
    {
        sf(x);
        q1.push(x);
    }
    sf(k2);
    while(k2--)
    {
        sf(x);
        q2.push(x);
    }

    while(1)
    {
        // en;
        if(q1.empty())
        {

            break;
        }
        if(q2.empty())
        {
            winner1=true;
            break;
        }
        xx=q1.front(),yy=q2.front();
        q1.pop(),q2.pop();
        if(cc[ {xx,yy}]>5)
        {
            flag=false;
            //cout<<xx<<"---"<<yy<<endl;
         // cout<<ck<<endl;
            break;
        }
        cc[ {xx,yy}]++;
        ck++;
        if(xx>yy)
            q1.push(yy),q1.push(xx);
        else
            q2.push(xx),q2.push(yy);



    }

    if(flag)
    {
        pf("%d ",ck);
        if(winner1)pf("1\n");
        else pf("2\n");
    }
    else pf("-1\n");

    return 0;
}
/*
Ref:
10
3 7 10 8
7 4 6 9 2 5 1 3

*/
