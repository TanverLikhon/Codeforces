#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
int main()
{
    int n;
    string  odd="I hate",even="I love",that="that ",it="it",str="";
sf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2!=0)str=str+odd;
else str=str+even;
str=str+" ";
if(i<n)str=str+that;

}
str=str+it;
cout<<str<<endl;
return 0;
}
