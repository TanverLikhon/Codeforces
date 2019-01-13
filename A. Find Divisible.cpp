
#include<bits/stdc++.h>
using namespace std;
#define sf          scanf
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define p          pair
#define m         map
#define nl         printf("\n")

int main()
{
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    if((2*x)<=y&&(2*x)!=x)
        cout<<x<<" "<<2*x<<endl;
}

return 0;
}


