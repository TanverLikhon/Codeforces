#include<bits/stdc++.h>
#define sf scanf
#define pf  printf
using namespace std;

///first attempt e para uchit chilo  :(
int main()
{
    int n,j;
            vector<int>vec;

    sf("%d",&n);
   // int arr[n];
    for(int i=0; i<n; i++){
         sf("%d",&j);
         vec.push_back(j);

    }
       sort(vec.begin(),vec.end());

    for(int i=0; i<n; i++ )cout<<vec.at(i)<<" ";
     //   pf("%d ",arr[i]);
    return 0;

}
