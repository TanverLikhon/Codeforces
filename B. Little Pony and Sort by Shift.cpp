#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string>ip;
    for(int i=0;i<n;i++)
    {
        string str,str1;
        cin>>str>>str1;
        str1=str1+";";
        ip[str1]=str;
    }



  for(int i=0;i<m;i++)
    {
        string str2,str3;
        cin>>str2>>str3;
        cout<<str2<<" "<<str3<<" #"<<ip[str3]<<endl;
    }
    return 0;
}
