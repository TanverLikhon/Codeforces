/*Never Give up*/
/*
Problem:https://codeforces.com/contest/1118/problem/A
Verdict :AC
Time:15ms
*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
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
//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    sf(t);
    while(t--)
    {
        ull n,a,b;
        cin>>n>>a>>b;
        ull cost=0;
        ull m=0;

        if(2*a<=b)
        {
            cost=cost+n*a;
        }
        else if(b<a*2)
        {
            cost=cost+(n/2)*b;
            m=(n/2)*2;
            if(m!=n)
            {
                cost=cost+(n-m)*a;
            }
        }
        cout<<cost<<endl;


    }
}


