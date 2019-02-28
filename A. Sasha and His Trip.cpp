/*Never Give up*/
//https://codeforces.com/contest/1113/problem/A
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
//ac
int main()
{

    int n,v;
    sff(n,v);
    int km=n-1;
    int  cost=min(v,km);
    int ck=cost;
    for(int i=2; i<n; i++)
    {
        cost--;
        if(cost<n-i)
        {
            while(cost<v)
            {
                cost++;
                ck+=i;
            }
        }
    }
    cout<<ck<<endl;
    return 0;
}

