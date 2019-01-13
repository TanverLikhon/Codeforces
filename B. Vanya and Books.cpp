#include<bits/stdc++.h>
using namespace std;
long long ck;
///accepted :)
int main()
{
 long long n,j;
    cin>>n;
long long arr[9]={9,99,999,9999,99999,999999,9999999,99999999,999999999};

   // for(long long i=0;i<9;i++)cout<<arr[i]<<endl;
    string str;
    str=to_string(n);
    int digit=str.size();
   // int k=1;j=9;

    for (int i=digit;i>1;i--)
    {
      //  double x=pow(10,i);
//cout<<pow(10,i)<<endl;
//cout<<ck<<endl;
//cout<<n<<" "<<arr[i-2]<<" "<<ck<<endl;
        ck=ck+i*(n-arr[i-2]);
        n=arr[i-2];
       // cout<<n<<endl;
    //    cout<<n<<" "<<arr[i-2]<<endl;
    }



cout<<ck+n<<endl;
   // cout<<digit<<endl;
return 0;

}

