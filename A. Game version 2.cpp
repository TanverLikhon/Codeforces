///404 not found
///fraction point
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,d;int c;
int x;
    cin>>a>>b;cin>>c;
    d=a/b*1.0;
//cout.setprecision(4);
    stringstream sso;
    sso<<d;
    string str,str1;
    sso>>str;


    sso<<c;
    sso>>str1;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='.'){x=i;break;}
    }
str.erase(0,x);
cout<<str<<endl;
if(str.find(str1) != string::npos)
    cout<<str.find(str1)<<endl;

}
