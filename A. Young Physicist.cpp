
#include<iostream>
using namespace std;


int main()
{
    int n,r1,r2,r3;
    cin>>n;
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        cin>>r1>>r2>>r3;
        s1=s1+r1;
        s2=s2+r2;
        s3=s3+r3;
    }
    if(s1!=0||s2!=0||s3!=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
