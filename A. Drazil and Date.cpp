#include<iostream>
///:( acceptd
using namespace std;
int main()
{
    long long a,b;
    unsigned long long s;
    cin>>a>>b>>s;
    long long z=abs(a)+abs(b);
    //cout<<z<<endl;
    if(z<=s&&((s-z)%2==0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
