#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
for(int i=0;i<t;i++)
    {
        int arr[100005];
        memset(arr,0,sizeof(arr));
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        bool ck=true;
        for(int i=1; i<n; i++)
        {
            if((arr[i]-arr[i-1]==1)||(arr[i]-arr[i-1])%2!=0)
            {
                ck==false
                cout<<"no"<<endl;
                break;
            }
        }
        if(flag==true)
            cout<<"yes"<<endl;
    }
    return 0;
}
