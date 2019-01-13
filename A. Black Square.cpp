#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
int a,b,c,d,sum=0;
string str;
map<int ,int>mp;
sf("%d %d %d %d",&a,&b,&c,&d);

cin>>str;
mp[1]=a;mp[2]=b;mp[3]=c;mp[4]=d;
for(int i=0;str[i]!='\0';i++)
{
    sum=sum+mp[str[i]-'0'];
}
pf("%d\n",sum);
return 0;
}

