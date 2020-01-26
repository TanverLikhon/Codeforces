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
#define pf1(a)        pf("%d\n",a);
#define PI  acos(-1)
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
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,a1,b1,a2,b2,a3,b3;
    int a4,b4,a5,b5,a6,b6;

    sff(x1,y1);
    sff(x2,y2);
    // cin>>x1>>y1>>x2>>y2;
    a1=x1,b1=y2;
    a2=x2,b2=y1;



    sff(x3,y3);
    sff(x4,y4);
    // cin>>x3>>y3>>x4>>y4;
    a3=x3,b3=y4;
    a4=x4,b4=y3;


    sff(x5,y5);
    sff(x6,y6);
    //cin>>x5>>y5>>x6>>y6;
    a5=x5,b5=y6;
    a6=x6,b6=y5;

    bool f1=true,f2=true,f3=true,f4=true;

    int tx1=x1,ty1=y1,tx2=x2,ty2=y2,tx3=a1,ty3=b1,tx4=a2,ty4=b2;

    if(x1>=x3&&y1>=y3&&x1<=x4&&y1<=y4)
    {
     tx1=max(tx1,)

    }
    else if(x1>=x5&&y1>=y5&&x1<=x6&&y1<=y6)
    {


    }


    if(x2>=x3&&y2>=y3&&x2<=x4&&y2<=y4)
    {


    }
    else if(x2>=x5&&y2>=y5&&x2<=x6&&y2<=y6)
    {



    }


    if(a1>=x3&&b1>=y3&&a1<=x4&&b1<=y4)
    {


    }
    else if(a1>=x5&&b1>=y5&&a1<=x6&&b1<=y6)
    {



    }


    if(a2>=x3&&b2>=y3&&a2<=x4&&b2<=y4)
    {


    }
    else if(a2>=x5&&b2>=y5&&a2<=x6&&b2<=y6)
    {


    }
    //
    // if(f1==false&&f3==false)







    return 0;
}
/*
Ref:
*/

