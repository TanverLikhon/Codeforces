#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    d=a+b;

    if(d.size()!=c.size())cout<<"NO"<<endl;
   else
   {
      sort(d.begin(),d.end());
       sort(c.begin(),c.end());
       if(c==d)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }
return 0;
   // cout<<d<<endl;
}
