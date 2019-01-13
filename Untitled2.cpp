#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;


    stack<int>st;
    map<int,int>mp;
        int arr[n];
    int arr1[n];
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
        mp[x]=i;
    }
    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
    }
    for(int j=0; j<n; j++)
    {
        int y=0;
        if(mp[arr[j]]>0)
        {
            while(st.top()!=arr[j])
            {
                st.pop();
                y++;
            }
            st.pop();
            y++;

        }
        arr1[j]=y;
    }
    for(int i=0; i<n; i++)
        printf("%d ",arr1[i]);
//cout<<st.top();
    return 0;
}



