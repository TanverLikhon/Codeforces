
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    int x,y,z,t1,t2,t3,s,e;
    sf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);
   e=abs(z-x)*t2+abs(x-y)*t2+3*t3;
   s=abs(x-y)*t1;
//cout<<e<< "  "<<s<<endl;
if(e<=s)pf("YES\n");
else pf("NO\n");
return 0;
}
