/// accepted :)
#include<bits/stdc++.h>
using namespace std;
int ck,ck1;
int main()
{
    int n;
    cin>>n;
        string s,s1;
map<int ,string>vec;

for(int i=0;i<n;i++)
{
cin>>s;
    vec[i]=s;
}
map<int,string>::iterator it=vec.begin();
s=it->second;

while(it!=vec.end())
{
    //cout<<it->second<<" ";
    if(it->second==s)ck++;
    else
    {
        ck1++;
        s1=it->second;
    }
it++;
    //vec.erase(it);
}
//cout<<ck<<ck1<<endl;
if(ck>ck1)cout<<s<<endl;
else cout<<s1<<endl;
return 0;
}
