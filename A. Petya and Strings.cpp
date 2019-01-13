#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[101],b[101];
    cin>>a;
    cin>>b;
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
int x=strcmp(a,b);
    cout<<x<<endl;
    return 0;
}
