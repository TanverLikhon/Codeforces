//https://codeforces.com/contest/1106/problem/A
#include<bits/stdc++.h>
using namespace std;
#define sf          scanf
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define p          pair
#define m         map
#define nl         printf("\n")
#define en        pf("Entered\n")
#define MAX  20000
//accepted
int main()
{
    int n;
    sf("%d",&n);
    getchar();
    char str[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            sf("%c",&str[i][j]);
        }
        getchar();
    }

    int ck=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout<<str[i][j];
            if(str[i][j]=='X')
            {
                if(i-1>=0&&i-1<n&&i+1>=0&&i+1<n&&j-1>=0&&j-1<n&&j+1>=0&&j+1<n)

                {
                    if(str[i-1][j-1]=='X'&&str[i-1][j+1]=='X'&&str[i+1][j-1]=='X'&&str[i+1][j+1]=='X')
                    {
                        ck++;
                        //en;
                    }
                }
            }
        }
//nl;
    }

    cout<<ck<<endl;
    return 0;
}


