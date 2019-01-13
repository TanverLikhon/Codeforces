#include<bits/stdc++.h>
///accepted
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,p,k;
        cin>>k>>p>>n;
        long long x= min(k,p);
        long long y=n*(k-x);
        cout<<y<<endl;

    }
    return 0;
}
