#include<bits/stdc++.h>
using namespace std;
int ck;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
       if(arr[i]<0&&sum+arr[i]<0)ck++;
        else
        sum=sum+arr[i];

    }
    cout<<ck<<endl;
    return 0;
}
