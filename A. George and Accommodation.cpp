#include<iostream>
using namespace std;
int ck;
int main()
{
    int n;
    cin>>n;
    int p,q;
    for(int i =1;i<=n;i++)
    {
        cin>>p>>q;
        if(q>p+1)ck++;
    }
    cout<<ck<<endl;
    return 0;
}
