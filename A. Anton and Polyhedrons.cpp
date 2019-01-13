#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,sum=0;
cin>>n;
    string s;
    map<string,int>str;
    map<string,int>::iterator it;
str["Tetrahedron"]=4;
str["Cube"]=6;
str["Octahedron"]=8;
str["Dodecahedron"]=12;
str["Icosahedron"]=20;
    for(long long i=0;i<n;i++)
    {

cin>>s;
for(it=str.begin();it!=str.end();it++)
{
    if(it->first==s)sum=sum+(it->second);
}
//cout<<it->second<<endl;
    }
cout<<sum<<endl;
return 0;
}
