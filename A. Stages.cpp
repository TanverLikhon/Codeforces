#include<bits/stdc++.h>
using namespace std;
///accepted fully done by me :)
int sum;
int main()
{
    int n,k,j;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    map<char ,int>str;

str.insert(make_pair(s[0],s[0]-96));
char ch;
ch=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]-ch>1)
        {str.insert(make_pair(s[i],s[i]-96));ch=s[i];}
    }
        map<char,int >::iterator it;
/*for(it=str.begin();it!=str.end();it++)
    cout<<it->first<<"  "<<it->second<<endl;*/

if(str.size()<k)sum=-1;
else
    for(it=str.begin(),j=1;it!=str.end();it++,j++)
    {

                    sum=sum+it->second;
                    if(j==k)break;
      /*
        if(it==str.end()&&j<k){cout<<-1<<endl;return 0;}*/
    }

/*    for(it=str.begin();it!=str.end();it++)
      cout<<it->first<<"  "<<it->second<<endl;*/

   // cout<<s<<endl;
    cout<<sum<<endl;
    return 0;
}
