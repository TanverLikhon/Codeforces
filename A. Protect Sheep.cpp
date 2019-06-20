/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/948/problem/A
Verdict     :AC
Time         :78 ms	200 KB
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
// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000

int dx[] = {-1, 0, 1, 0};/*4 side move*/
int dy[] = {0, 1, 0, -1};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

int main()
{
    int r,c;
    sff(r,c);
    char str[r+1][c+1];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            cin>>str[i][j];
            if(str[i][j]=='.')str[i][j]='D';
        }
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            if(str[i][j]=='W')
            {
                for(int k=0; k<4; k++)
                {
                    int xx=i+dx[k],yy=j+dy[k];
                    if(xx>=0&&xx<r&&yy>=0&&yy<c&&str[xx][yy]=='S')
                    {
                        pf("No\n");
                        return 0;
                    }
                }
            }
    pf("Yes\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            pf("%c",str[i][j]);

        }
        nl;
    }
    return 0;
}
/*
Ref:
*/
