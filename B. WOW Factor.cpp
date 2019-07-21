/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1178/problem/B
Verdict     :AC
Time         :187 ms	27100 KB
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
ull lcs(string a)
{
    string b="wow";
    int m = sz(a);
    int n = sz(b);
    ull res[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; i++)
        res[0][i] = 0;

    for (int i = 0; i <= m; i++)
        res[i][0] = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                res[i][j] = res[i - 1][j - 1] +res[i - 1][j];
            else
                res[i][j] = res[i - 1][j];
        }
    }
    return res[m][n];
}


int main()
{
    string str;
    cin>>str;
    string str1="";
    int vc=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='v')
            vc++;
         if(str[i]=='o'||i==(sz(str)-1))
        {
           // cout<<"i  "<<i<<"   ";
          //  cout<<sz(str)-1<<endl;
            if(vc>1)
            {
                for(int k=1; k<vc; k++)
                    str1+="w";
            }
            vc=0;
            str1+="o";
        }
    }
    //cout<<str1<<endl;
//pf("%lld\n",lcs(str1));
cout<<lcs(str1)<<endl;
    return 0;
}
/*
Ref:
*/
