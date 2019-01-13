#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;

    for(int i=0;i<n;i++ )
    {
        string s,s1;
        cin>>s;
        if(mp[s]<1)
        {
        cout<<"OK"<<endl;
        mp[s]=1;
        }
        else
        {
            cout<<s<<mp[s]<<endl;mp[s]++;

        }


    }
    return 0;
}
