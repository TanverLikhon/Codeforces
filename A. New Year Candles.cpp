#include<iostream>
using namespace std;
int main()
{
    int x,a,b,sum=0;
    cin>>a>>b;
    sum=a;
    while(a>=b)//a!=0 runntime error coz 1%2 cholte thakbe
    {
        sum=sum+a/b;
       x=a%b;
        a=x+a/b;
    }
    cout<<sum<<endl;
    return 0;
}
