
#include<iostream>
using namespace std;
int sum;
int main()
{
    int k,n,b;
    long long w;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        sum=sum+(i*k);
    }
b=sum-n;
    if(n>=sum)
        cout<<0<<endl;
    else
        cout<<b<<endl;

    return 0;
}
