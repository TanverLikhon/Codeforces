#include<iostream>
using namespace std;
int main()
{
    int n,i,ck=0;
    cin>>n;
    int sum=0,x=0;
    for(i=1;;i++)
    {

        sum=sum+i;
        x=x+sum;
        if(x>n)break;
        ck++;
        // cout<<sum<<" "<<ck<<endl;
    }
    cout<<ck<<endl;
    return 0;


}
