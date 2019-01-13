#include<iostream>
using namespace std;
///logic er..........................

int ck;
int main()
{
     int  n,x;
    cin>>n>>x;
for( int i=1;i<=n;i++)if(x%i==0&&(x/i)<=n)ck++;



    cout<<ck<<endl;
    return 0;


}
