#include<iostream>
#include<string>
using namespace std;
int arr[10000];
int main()
{
    int m=10000;
    int n,ck=0,j=0,k=0;
        cin>>n;
    char s[n],t[n];

    cin>>s;
    cin>>t;
    if(s==t)cout<<j<<endl;
    else
    for(int i=1;i<=m;i++)
    {
        if(s[i]!=t[i]){ck++;
        arr[i]=i;
        swap(s[i],s[i+1]);

        }
        if(s==t){k=1;break;}
    }
if(k==1)
{
    cout<<ck<<end;
    for(int i=1;i<=m;i++)cout<<arr[i]

}





}
