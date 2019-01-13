
#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[ n];
    for(long long i=0;i<n;i++)cin>>arr[i];
   for(long long i=0;i<n;i++)
   {
       if(arr[i]==1)arr[i]=2;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==2)arr[i]=1;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==3)arr[i]=4;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==4)arr[i]=3;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==5)arr[i]=6;
   }

   for(long long i=0;i<n;i++)
   {
       if(arr[i]==6)arr[i]=5;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==7)arr[i]=8;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==8)arr[i]=7;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]==9)arr[i]=10;
   }

     for(long long i=0;i<n;i++)
   {
       if(arr[i]>=10&&arr[i]%2==0)arr[i]=arr[i]-1;

   }
for(long long i=0;i<n;i++)
{
    if(arr[i]>=10&&arr[i]%2!=0)arr[i]=arr[i]+1;
}

  for(long long i=0;i<n-1;i++)cout<<arr[i]<<" ";
  cout<<arr[n-1]<<endl;
   return 0;
}
