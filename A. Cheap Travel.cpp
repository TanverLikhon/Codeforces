#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,cost=0;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(m*a<b)
    {
        cost=cost+n*a;
    }
    else
    {
        if(n>=m)
        {
            int ride=n/m;
            cost=cost+ride*b;
            int rem=n%m;
            if(rem*a<b)
                cost =cost+rem*a;
            else
                cost=cost+b;
        }
        else
        {
            if(n*a<b)
                cost=cost+n*a;
            else
                cost= cost+b;
        }
    }



    printf("%d\n",cost);

    return 0;
}
