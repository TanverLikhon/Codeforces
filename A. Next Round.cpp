#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int n,k,ck=0;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1]&&arr[i]>0)
            ck++;
    }
    cout<<ck<<endl;
    return 0;
}
