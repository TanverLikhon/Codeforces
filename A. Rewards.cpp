#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
int a1,a2,a3,b1,b2,b3,n;
int medal,cup,m,c;
sf("%d %d %d %d %d %d %d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
m=a1+a2+a3;c=b1+b2+b3;
//int x=m/5;
medal=m/5;
if(m%5>0)medal=medal+1;
cup=c/10;
if(c%10>0)cup=cup+1;
//cout<<" m "<<medal<<" "<<cup<<endl;
if(medal+cup<=n)pf("YES\n");
else pf("NO\n");


return 0;
}
