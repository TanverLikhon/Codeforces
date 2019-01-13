#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,sum=0;
int ck,f;
    cin>>n>>a>>b;
   vector<int >arr,arr1;
     vector<int >:: iterator it;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        arr1.push_back(x);
    }

 reverse(arr1.begin(),arr1.end());
for(int i=0;i<n;i++)
{
   // cout<<arr.at(i);
if(arr.at(i)!=1&&arr.at(i)!=0)
   {
       ck=0;
       break;
   }
else ck=1;
}
//cout<<ck;
if(ck==1)
{
 for(int i=0;i<n;i++)
{
if(arr.at(i)!=arr.at(i)){f=0;break;}
else f=1;
}
}

if(f==1&&ck==1)cout<<0<<endl;

else if(



        )


   /// if(ck==1&&str1==str)cout<<0<<endl;

}
