#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

int main()
{
    int n;
    sf("%d",&n);
    int arr[n];
    int arr1[n];

    list<int>st;
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        int x;
        sf("%d",&x);
        st.push_back(x);
        mp[x]=i;
    }

    for(int i=0; i<n; i++)
    {
        sf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        int y=0;
        if(mp[arr1[i]]>0)
        {

            while(!st.empty()&&st.front()!=arr1[i])
            {
               mp[st.front()]=0;//cout<<st.top()<<" deleted"<<endl;
                st.pop_front();
                y++;

            }
            mp[st.front()]=0;
            st.pop_front();
            y++;

        }
    arr[i]=y;
    }
    for(int i=0; i<n; i++)
        pf("%d ",arr[i]);
    return 0;
}


