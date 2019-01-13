#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //getchar();
  string str;
  cin>>str;
  vector<char>vec;
  vector<char>::iterator it;
  while(n!=0)
  {
      if(n%2!=0)vec.push_back(str[0]);
else
    vec.insert(vec.begin(),str[0]);

str.erase(0,1);

n=str.size();

  }
  for(it=vec.begin();it!=vec.end();it++)
    cout<<*it;
  cout<<endl;


}
