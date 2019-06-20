/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/259/problem/B
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
    int arr[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            sf(arr[i][j]);
    ll sum=arr[0][1]+arr[0][2]+arr[1][0]+arr[1][2]+arr[2][1]+arr[2][0];
    sum/=2;
//cout<<sum<<endl;
for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                if(i==0)
                    pf("%lld ",(sum-arr[i][1]-arr[i][2]));
                else if(i==1)
                    pf("%lld ",sum-arr[i][0]-arr[i][2]);
                else if(i==2)
                    pf("%lld ",sum-arr[i][1]-arr[i][0]);
            }
            else
                pf("%d ",arr[i][j]);

        }nl;
    }
    return 0;
}

