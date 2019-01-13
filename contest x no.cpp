#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
 int arr[n];
map<int,int>vec;
map<int,int>vec1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
        vec[x]=i;
    }
map<int,int>::iterator it,it1;
for(it=vec.begin();it!=vec.end();it++)
{

vec1[it->second]=arr[it->second];
   // cout<<it->first<<" "<<it->second<<endl;
 //  cout<<arr[it->second]<<endl;


}
cout<<vec1.size()<<endl;
for(it1=vec1.begin();it1!=vec1.end();it1++)
{


 cout<<it1->second<<" ";


}


//    for(int )
return 0;
}
