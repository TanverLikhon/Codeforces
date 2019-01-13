
#include<iostream>
#include<cmath>
using namespace std;
int ara[100];
int main()
{
    int n,m,x,y,count=0;
    cin>>n;
    cin>>m;
    while(n--)
    {
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            ara[i]=i;

        }

    }
    for(int i=1;i<=m;i++)
    {
        if(ara[i]==0){count++;

        }

    }
    cout<<count<<endl;
        for(int i=1;i<=m;i++)
    {
        if(ara[i]==0)cout<<i<<" ";

    }
    cout<<endl;

     return 0 ;
}
