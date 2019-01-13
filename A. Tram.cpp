#include<iostream>
using namespace std;
int main()
{
    int n,j,x;
    cin>>n;
    j=2*n;
    int arr[j],max=0;
    for(int i=0;i<j;i++)cin>>arr[i];
    x=arr[1];
    max=x;
    for(int i=1;i<j-2;i=i+2)
    {
        x=x-arr[i+1]+arr[i+2];

        if(x>max)max=x;
    }
    cout<<max<<endl;
    return 0;
}
