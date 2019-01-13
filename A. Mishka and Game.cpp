#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
int miska,chrish;
int main()
{
int n;
sf("%d",&n);
for(int i=0;i<n;i++)
{
    int x,y;
    sf("%d %d",&x,&y);
if(x>y)miska++;
else if(y>x)chrish++;
else ;
}
//cout<<chrish<<" "<<miska<<endl;
if(miska>chrish)pf("Mishka\n");
else if(chrish>miska)pf("Chris\n");
else pf("Friendship is magic!^^\n");
return 0;
}
