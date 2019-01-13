#include<iostream>
using namespace std;
int ck;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
//int arr[n];
//for(int i=0;i<n;i++)arr[i]=i+1;
for(int i=a+1;i<=n;i++)
{
    if((n-i)<=b)ck++;
}
cout<<ck<<endl;
return 0;

}
