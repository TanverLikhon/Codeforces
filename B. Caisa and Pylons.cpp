
#include<iostream>
using namespace std;
int ck;
int main()
{
    int n;
    cin>>n;
  int  height[n];
  //cin>>height[0];

  for(int i=0;i<n;i++)
  {
        cin>>height[i];
  }
   ck=height[0];
for(int i=1;i<n;i++)
  {
      if(height[i]>ck)ck=height[i];
      //cout<<ck<<endl;
 // ck=ck+height[i]-height[i+1];
  }
cout<<ck<<endl;
return 0;

}
