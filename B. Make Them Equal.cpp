/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1154/problem/B
Verdict     :AC
Time         :31 ms	100 KB
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
#define sp  ' '
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
    faster
    int n;
    cin>>n;
    set<int>st;
    while(n--)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    if(sz(st)>3)
    {
        cout<<"-1"<<endl;

    }
    else if(sz(st)==2)
    {
        int x,y;
        set<int>::iterator it=st.begin();
        x= *it;
        it++;
        y=*it;
        if((y-x)%2)
            cout<<y-x<<endl;
        else
            cout<<(y-x)/2<<endl;
    }
    else if(sz(st)==1)
        cout<<"0\n";
    else
    {
        set<int>::iterator it=st.begin();
        int x,y,z;
        x=*it;
        it++;
        y=*it;
        it++;
        z=*it;
        it++;
        if(z-y!=y-x)
            cout<<-1<<endl;
        else
            cout<<y-x<<endl;
    }



    return 0;
}
/*
Ref:https://codeforces.com/blog/entry/66586
*/
