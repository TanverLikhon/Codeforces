/*Never Give up*/
/*
Problem  :https://codeforces.com/contest/462/problem/A
Verdict     :AC
Time         :31ms
Memory  :0kB
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%ld",&a)
#define sll(a,b)         scanf("%ld%ld",&a,&b)
#define slll(a,b,c)         scanf("%ld%ld%ld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%ld%ld%ld%ld",&a,&b,&c,&d)
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define pi          pair
#define mp         map
#define nl         printf("\n")
#define en        pf("Entered\n")
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int Row,Col;
bool isvalid(int r,int c)
{
    if(r>=0&&r<Row&&c>=0&&c<Col)
        return true;
    return false;
}
int main()
{
    int n;
    sf(n);
    Row=n,Col=n;
    char str[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>str[i][j];
    for(int i=0; i<n; i++)
    {

        bool flag=false;
        for(int j=0; j<n; j++)
        {
            int ck=0;
            for(int k=0; k<4; k++)
            {
                int row=i+dx[k];
                int col=j+dy[k];
                if(isvalid(row,col)&&str[row][col]=='o')
                    ck++;

            }
            if(ck%2==1)
            {
                pf("NO\n");
                return 0;
            }

        }
        // cout<<i<<"->"<<ck<<endl;cout<<flag<<endl;

    }
    pf("YES\n");
    return 0;
}

