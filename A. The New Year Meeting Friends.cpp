#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    int x;
int max=1,min=100;
for(int i=0;i<3;i++)
{
    sf("%d",&x);
    if(x>max)max=x;
    if(x<min)min=x;
}
pf("%d\n",max-min);
    return 0;
}

