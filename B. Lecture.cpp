#include<bits/stdc++.h>
///accepted :)
///my first stl program
using namespace std;

int main()
{
    int i,n,m;
    cin>>n>>m;
    string s,s1;
pair<string ,string> str[m];
vector<string>vec;
//vector<string>vec1;
for(int i=0;i<m;i++)
{
    cin>>s;
    cin>>s1;
    str[i]=make_pair(s,s1);
}

for(int i=0;i<n;i++)
{
    cin>>s;
  vec.push_back(s);
}
for(int i=0;i<vec.size();i++)
{
    for(int j=0;j<m;j++)
    {
        if((vec.at(i)==str[j].first)&&str[j].second.length()<str[j].first.length())
         vec.at(i)=str[j].second;
    }
}
for(int i=0;i<vec.size()-1;i++)
   {
       cout<<vec[i]<<" ";
   }
   cout<<vec[vec.size()-1]<<endl;
   return 0;
}
