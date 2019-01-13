#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;

    for(i=1;a<=b;i++)
    {
        a=a*3;
        b=b*2;
    }
    cout<<i-1<<endl;
    return 0;
}
