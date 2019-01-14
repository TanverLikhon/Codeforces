#include<bits/stdc++.h>
using namespace std;
#define sf          scanf
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
//#define l            list
#define p          pair
#define m         map
#define nl         printf("\n")
int main()
{
    int q;cin>>q;
    while(q--)
    {
        int l,r,d;cin>>l>>r>>d;
        int ans;
        int x=((r/d)+1)*d;
        int y=(l/d);

        if(l>d)ans=d;
        else ans=x;
        cout<<ans;nl;
    }
return 0;

}
