
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string c;
  cin>>c;

int x=c.find("1111111");
int y=c.find("0000000");
if(x>=0||y>=0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
