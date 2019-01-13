#include<bits/stdc++.h>
///accepted in vjudge
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
    cin>>n>>k;
   vector<long long >vecmain;
   long long sum=0;
   for(int i=1;i<=n;i++)
   {
       vector<long long >vec;
       for(int j=1;j<=3;j++)
       {
           long long x;
           cin>>x;
           vec.push_back(x);
       }
       sort(vec.begin(),vec.end());
       vecmain.push_back(vec.at(0));
        vecmain.push_back(vec.at(1));
        vec.clear();
   }
   sort(vecmain.begin(),vecmain.end());
   for(int i=0;i<k;i++)
   {

       sum=sum+vecmain.at(i);
   }
    cout<<sum<<endl;
    vecmain.clear();
    }

    return 0;
}
