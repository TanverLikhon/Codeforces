///unsolved
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    int n,ck=0;
    sf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {    int x=0;
         string str;cin>>str;
        for(int j=0; j<n; j++)
        {
            if(str[j]=='o')
                x++;
        }
        if(x%2!=0)ck++;
    }
if(ck==n)pf("YES\n");
else pf("NO\n");
    return 0;
}
