#include<iostream>
using namespace std;
 int ck=0;
 int main()
{
  string a;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>a;
      int x=a.length();

          if(a=="++X"||a=="X++") ck++;
          else if (a=="X--"||a=="--X") ck--;

  }
  cout<<ck<<endl;
  return 0;
}
