#include<iostream>
using namespace std;
int ck;
int main()
{
    int n,a,b,c;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a>>b>>c;
    if((a==1&&b==1)||(b==1&&c==1)||(c==1&&a==1))ck++;
}
cout<<ck<<endl;
return 0;
}
