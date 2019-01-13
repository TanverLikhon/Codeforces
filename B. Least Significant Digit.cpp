#include<iostream>
using namespace std;
int ck;
int main()
{
    long long n;
    int d,r;
    cin>>n>>d;

    for (int i=1;i<=n;i++)
    {
        if(i%10==d)ck++;


    }

    cout<<ck<<endl;
    return 0;


}
