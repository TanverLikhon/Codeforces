/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/1194/problem/C
Verdict     :AC
Time         :30 ms	200 KB
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
int lcs( string X, string Y, int m, int n )
{
    int L[m+1][n+1];
    int i, j;
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;

            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }

    return L[m][n];
}
mp<char,int >str13;
mp<char,int >str2;
int main()
{
    int t;
    sf(t);
    for(int k=0; k<t; k++)
    {

        string s,t,p;
        cin>>s>>t>>p;
        if(s==t)
        {
            pf("YES\n");
            continue;
        }
        int szs=sz(s),szt=sz(t),szp=sz(p);
        bool res=true;
        if(szs>szt)
        {
            res=false;
            pf("NO\n");
            continue;
        }
        int rr=lcs(s,t,szs,szt);
        if(rr!=szs)
        {
            res=false;
            pf("NO\n");
            continue;
        }
        if(res)
        {
                        for(int i=0;i<szt;i++)
                str2[t[i]]++;

             for(int i=0;i<szs;i++)
                str13[s[i]]++;

                 for(int i=0;i<szp;i++)
                str13[p[i]]++;

                mp<char,int>::iterator it=str2.begin();
                while(it!=str2.end())
                {
                    char ch=it->ff;
                    int xx= it->ss;
                    if(str13[ch]<xx)
                    {
                        res=false;
                      ///  pf("NO\n");
                        break;
                    }

                    it++;
                }
        }

        if(res)
            pf("YES\n");
        else
            pf("NO\n");
        str13.clear();
        str2.clear();
    }

    return 0;
}
/*
Ref:
*/
