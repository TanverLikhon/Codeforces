#include<bits/stdc++.h>
using namespace std;


string toBinary(unsigned int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main()
{
    unsigned int n,t;
    string bin;
    string bins;
    cin>>t;
    while(t--){
            int count=0;
    cin>>n;
    int m=n-1;
   bin= toBinary(n);
   bins=toBinary(m);

  int len=bin.length();
  int lens=bins.length();

for(int i=0;i<len;i++)
{
    if(bin[i]!=bins[i]){
        count++;
    }
}
cout<<count<<endl;
    }

}
