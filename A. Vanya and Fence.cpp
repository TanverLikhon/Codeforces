#include<iostream>
using namespace std;
int ck;
int main()
{
    int n,h;
    cin>>n>>h;
   // int arr[n];
   int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>h)ck=ck+2;
        else ck++;
    }
    cout<<ck<<endl;
    return 0;
}
