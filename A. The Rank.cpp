
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define mp make_pair
int ck;
int main()
{
    int n,x;
    sf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b,c,d;
        sf("%d %d %d %d",&a,&b,&c,&d);
        int sum=a+b+c+d;
        if(i==1){x=sum;}
         else if(sum<=x)ck++;
    }
pf("%d\n",n-ck);


    return 0;
}
