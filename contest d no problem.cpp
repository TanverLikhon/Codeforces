#include<bits/stdc++.h>
using namespace std;
///accepted in v judge
int main()
{
    int  t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n+1]= {0};

        for(int i=1; i<=n-1; i++)
        {
            int x;
            cin>>x;
          arr[x]++;
        }
        for(int i=1; i<=n; i++)
        {
            if(arr[i]==0)
                cout<<i<<endl;
        }
    }
    return 0;
}
